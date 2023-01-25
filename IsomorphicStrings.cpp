#include<iostream>
#include<unordered_map>
using namespace std;
class Solution{
    public:
    bool isIsomorphic(string s, string t){
        unordered_map<char,char> mp ,mp2;
        for(int i=0;i<s.length();i++)
{
    if(mp[s[i]] && mp[s[i]] != t[i]) return false;
    if(mp2[t[i]] && mp2[t[i]] != s[i]) return false;
    mp[s[i]]=t[i];
    mp2[t[i]]=s[i];
    
}
return true;
    }
};
int main(){
    string s,t;
    cin >> s>>t;
    Solution s1;
    cout << boolalpha << s1.isIsomorphic(s,t);
}