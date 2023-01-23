#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int n = s.size();
        int count = 0;
        int ans = 0;
        for(int i=0;i<n;i++) {
            if(s[i] == '1') {
                count++;
            } else {
                ans++;
            }
            ans = min(ans,count);
        }
        return ans;
    }};
int main() {
    string s1;
    cin>>s1;
    Solution s;
    cout<<s.minFlipsMonoIncr(s1)<<endl;
    return 0;
}
