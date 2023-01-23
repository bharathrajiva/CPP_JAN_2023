#include<iostream>
#include<cstring>
using namespace std;
class Solution {
    public:
    bool isMaych(string s,string p){
    int len0 = s.length();
    int count =0;
    int len1 = p.length();
    for(int i=0;i<len1;i++){
        if(p[i]==s[i]||p[i]=='?'){
            count +=1;
        }
        if(p[i]=='*'){
            return true;
        }

    }
    if(count == len0){
        return true;
    }
    else return false;

    }};
int main(){
    string s,p;
    cin >> s>>p;
    Solution s1;
    cout<<boolalpha<<s1.isMaych(s,p);

}