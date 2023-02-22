#include<iostream>
#include<fstream>
#include<string>
#include<queue>
using namespace std;
class Solution{
    public:
    int minCut(string s){
        int n=s.size();
        vector<vector<bool>> isPal(n,vector<bool>(n,false));
        for(int i=n-1;i>=0;i--){
            for(int j=i;j<n;j++){
                isPal[i][j]=(s[i]==s[j])&&(j-i<2||isPal[i+1][j-1]);
            }
        }
        vector<int> dp(n);
        for(int i=0;i<n;i++){
            if(isPal[0][i]){
                dp[i]=0;
            }else{
                dp[i]=i;
                for(int j=0;j<i;j++){
                    if(isPal[j+1][i]){
                        dp[i]=min(dp[i],dp[j]+1);
                    }
                }
            }
        }
        return dp[n-1];
    }
};
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    return 0;
}