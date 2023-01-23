#include<iostream>
#include<vector>

using namespace std;
class Solution {
    public:
    int numberOfGoodPaths(vector<int>& vals,vector<vector<int>>& edges,int start,int end,int good) {
        int n = vals.size();
        vector<vector<int>> dp(n,vector<int>(good+1,0));
        dp[start][vals[start]] = 1;
        for(int i=0;i<edges.size();i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            for(int j=0;j<=good;j++) {
                if(dp[u][j] > 0) {
                    dp[v][j+vals[v]] += dp[u][j];
                }
            }
        }
        int ans = 0;
        for(int i=0;i<=good;i++) {
            ans += dp[end][i];
        }
        return ans;
    }
};
int main() {
    int n,m;
    cin>>n>>m;
    vector<int> vals(n);
    for(int i=0;i<n;i++) {
        cin>>vals[i];
    }
    vector<vector<int>> edges(m,vector<int>(2));
    for(int i=0;i<m;i++) {
        cin>>edges[i][0]>>edges[i][1];
    }
    int start,end,good;
    cin>>start>>end>>good;
    Solution s;
    cout<<s.numberOfGoodPaths(vals,edges,start,end,good)<<endl;
    return 0;
}