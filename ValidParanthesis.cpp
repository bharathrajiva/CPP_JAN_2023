#include <iostream>
#include <string>
using namespace std;
class Solution {
    public:
    bool inValid(string s, string bracket[]){
        int i = 0;
        while(i < s.length()){
            if(s[i] == bracket[0][0] && s[i+1] == bracket[0][1]){
                s.erase(i,2);
                i = 0;
            }
            else if(s[i] == bracket[1][0] && s[i+1] == bracket[1][1]){
                s.erase(i,2);
                i = 0;
            }
            else if(s[i] == bracket[2][0] && s[i+1] == bracket[2][1]){
                s.erase(i,2);
                i = 0;
            }
            else{
                i++;
            }
        }
        if(s.length() == 0){
            return true;
        }
        else{
            return false;
        }
    }
       
};
int main(){
    string s1;
    string bracket[3] = {"()", "{}", "[]"};
    cin >> s1;
    Solution s;
    cout << s.inValid(s1,bracket) << endl;
    return 0;
}