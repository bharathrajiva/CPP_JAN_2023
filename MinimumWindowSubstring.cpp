#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <algorithm>
using namespace std;
class Solution {
public:
    string minWindow(string s, string t) {
        map<char, int> mp;
        for(auto elem: t) mp[elem]++;
        int lenT=t.size(), st=0, en=0, len=INT_MAX, begin=0;
        while(en<s.size()){
            if(mp[s[en++]]-- > 0) lenT--;
            while(lenT==0){
                if(en-st<len)  len=en-(begin=st);
                if(mp[s[st++]]++==0) lenT++;
            }  
        }
        return len==INT_MAX? "":s.substr(begin, len);
    }
};
int main(){
    string s, t;
    cin>>s>>t;
    Solution sol;
    cout<<sol.minWindow(s, t);
    return 0;
}