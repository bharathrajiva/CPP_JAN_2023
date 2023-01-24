#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    bool isMatch(string s, string p) {
    int m = s.length();
    int n = p.length();
    vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));
    dp[0][0] = true;
    for (int i = 1; i <= n; i++) {
        if (p[i - 1] == '*') {
            dp[0][i] = dp[0][i - 2];
        }
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (p[j - 1] == '*') {
                dp[i][j] = dp[i][j - 2] || (s[i - 1] == p[j - 2] || p[j - 2] == '.') && dp[i - 1][j];
            }
            else {
                dp[i][j] = (s[i - 1] == p[j - 1] || p[j - 1] == '.') && dp[i - 1][j - 1];
            }
        }
    }
    return dp[m][n];
}

};
int main(){
    string s,p;
    cin >>s>>p;
    Solution s1;
    cout<<boolalpha<<s1.isMatch(s,p);
}