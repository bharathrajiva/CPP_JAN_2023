#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<queue>
#include<unordered_set>
#include<unordered_map>
using namespace std;
class Solution{
    public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList){
        vector<vector<string>> result;
        unordered_set<string> dict(wordList.begin(),wordList.end());
        if(dict.find(endWord)==dict.end()){
            return result;
        }
        unordered_set<string> head,tail;
        head.insert(beginWord);
        tail.insert(endWord);
        unordered_map<string,vector<string>> map;
        bool found=false;
        bool backward=false;
        while(!head.empty()&&!tail.empty()&&!found){
            if(head.size()>tail.size()){
                swap(head,tail);
                backward=!backward;
            }
            unordered_set<string> temp;
            for(auto it=head.begin();it!=head.end();it++){
                string word=*it;
                dict.erase(word);
                for(int i=0;i<word.size();i++){
                    char letter=word[i];
                    for(int j=0;j<26;j++){
                        word[i]='a'+j;
                        if(tail.find(word)!=tail.end()){
                            found=true;
                            backward?map[word].push_back(*it):map[*it].push_back(word);
                        }
                        else if(!found&&dict.find(word)!=dict.end()){
                            temp.insert(word);
                            backward?map[word].push_back(*it):map[*it].push_back(word);
                        }
                    }
                    word[i]=letter;
                }
            }
            swap(head,temp);
        }
        if(found){
            vector<string> path={beginWord};
            generatePath(beginWord,endWord,map,path,result);
        }
        return result;
    }
    void generatePath(string &beginWord,string &endWord,unordered_map<string,vector<string>> &map,vector<string> &path,vector<vector<string>> &result){
        if(beginWord==endWord){
            result.push_back(path);
            return;
        }
        for(auto it=map[beginWord].begin();it!=map[beginWord].end();it++){
            path.push_back(*it);
            generatePath(*it,endWord,map,path,result);
            path.pop_back();
        }
    }

};
int main(){
    string beginWord,endWord;
    cin>>beginWord>>endWord;
    int n;
    cin>>n;
    vector<string> wordList(n);
    for(int i=0;i<n;i++){
        cin>>wordList[i];
    }
    Solution s;
    vector<vector<string>> result=s.findLadders(beginWord,endWord,wordList);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<endl;
        }
        cout<<endl;
    }
}