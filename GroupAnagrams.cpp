#include<iostream>
#include<string>
#include<vector>
using namespace std;
#include <algorithm>
#include <unordered_map>
class Solution {
public:
       vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> vt;
        unordered_map<string,vector<string>> map;
        for(auto i:strs){
            string temp = i;
            sort(temp.begin(),temp.end());
            map[temp].push_back(i);
        }
        for(auto i:map) vt.push_back(i.second);
        return vt;
    }
};
int main(){
    vector<string> strs;
    int inputsize;
    cout <<"Enter the size of the array: "<<endl;
    cin >> inputsize;
    for(int i = 0; i < inputsize; i++) {
        string input;
        cin >> input;
        strs.push_back(input);
    }
    Solution s;
    vector<vector<string>> result = s.groupAnagrams(strs);
    for(int i = 0; i < result.size(); i++) {
        for(int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}