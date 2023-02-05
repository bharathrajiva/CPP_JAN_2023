#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if(digits.size()==0){
            return result;
        }
        map<char,string> m;
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";
        result.push_back("");
        for(int i=0;i<digits.size();i++){
            vector<string> temp;
            string chars=m[digits[i]];
            for(int c=0;c<chars.size();c++){
                for(int j=0;j<result.size();j++){
                    temp.push_back(result[j]+chars[c]);
                }
            }
            result=temp;
        }
        return result;
    }
};
int main(){
    string input;
    cin>>input;
    Solution s;
    vector<string> result=s.letterCombinations(input);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }
}