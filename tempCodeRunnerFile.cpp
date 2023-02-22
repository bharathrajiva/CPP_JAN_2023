
        memset(dp, -1, sizeof(dp));
        return fun(s, t, 0, 0);
    }
};
int main(){
    string s,t;
    cin>>s>>t;
    Solution sol;
    cout<<sol.numDistinct(s,t)<<endl;
    return 0;
}