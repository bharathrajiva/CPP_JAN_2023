#include<iostream>
#include<stack>
#include<string>
using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int ans=0;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='('){
                st.push(i);
            }else{
                st.pop();
                if(st.empty()){
                    st.push(i);
                }
                int sz=i-st.top();
                ans=max(ans,sz);
            }
        }
        return ans;
    }
};
int main(){
    string s;
    cin>>s;
    Solution sol;
    cout<<sol.longestValidParentheses(s);
    return 0;
}
