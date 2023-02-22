#include<iostream>
#include<fstream>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<map>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;
class Solution{
    public:
    string shortestPalindrome(string s){
        int n=s.length();
        int i=0;
        for(int j=n-1;j>=0;j--){
            if(s[i]==s[j]) i++;
        }
        if(i==n) return s;
        string remain=s.substr(i);
        reverse(remain.begin(),remain.end());
        return remain+shortestPalindrome(s.substr(0,i))+s.substr(i);
    }
};
int main(){
    Solution s;
    string input;
    cin>>input;
    cout<<s.shortestPalindrome(input)<<endl;
    return 0;
}