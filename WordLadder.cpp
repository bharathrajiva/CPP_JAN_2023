#include<iostream>
#include<fstream>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<map>
#include<list>
#include<iterator>
#include<algorithm>
#include<functional>
#include<numeric>
#include<utility>
#include<sstream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<ctime>
#include<cstring>
#include<climits>
#include<cassert>
#include<unordered_set>
#include<unordered_map>
using namespace std;
class Solution{
    public:
    int ladderLength(string beginWord, string endWord,vector<string>& wordlist){
        unordered_set<string> wordset(wordlist.begin(),wordlist.end());
        if(wordset.find(endWord)==wordset.end()) return 0;
        unordered_set<string> beginset{beginWord};
        unordered_set<string> endset{endWord};
        int len=1;
        int strLen=beginWord.length();
        while(!beginset.empty()&&!endset.empty()){
            if(beginset.size()>endset.size()){
                swap(beginset,endset);
            }
            unordered_set<string> tempset;
            for(string word:beginset){
                wordset.erase(word);
                for(int i=0;i<strLen;i++){
                    char ch=word[i];
                    for(int j='a';j<='z';j++){
                        word[i]=j;
                        if(endset.find(word)!=endset.end()){
                            return len+1;
                        }
                        if(wordset.find(word)!=wordset.end()){
                            tempset.insert(word);
                            wordset.erase(word);
                        }
                    }
                    word[i]=ch;
                }
            }
            len++;
            swap(beginset,tempset);
        }
        return 0;

    }
    };
int main(){
    Solution s;
    vector<string> wordlist;
    int input_size;
    cin>>input_size;
    for(int i=0;i<input_size;i++){
        string temp;
        cin>>temp;
        wordlist.push_back(temp);
    }
    cout<<s.ladderLength("hit","cog",wordlist)<<endl;
    return 0;

}