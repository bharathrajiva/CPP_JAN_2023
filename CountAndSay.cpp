#include <iostream>
#include <string>
using namespace std;
class Solution{
public:
    string countAndSay(int n){
        string s = "1";
        for(int i = 1; i < n; i++){
            s = next(s);
        }
        return s;
    }
    string next(string s){
        string res = "";
        int count = 1;
        for(int i = 0; i < s.size(); i++){
            if(i == s.size() - 1 || s[i] != s[i + 1]){
                res += to_string(count) + s[i];
                count = 1;
            }
            else{
                count++;
            }
        }
        return res;
    }
};

int main(){
    Solution s;
    cout << s.countAndSay(5) << endl;
    return 0;
}