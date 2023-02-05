#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
class Solution {
    public:
     bool isNumber(string s){
            int state=0;
            int finals=0b101101000;
            vector<vector<int>> transfer={{0,1,6,2,-1},
                                        {-1,-1,6,2,-1},
                                        {-1,-1,3,-1,-1},
                                        {8,-1,3,-1,4},
                                        {-1,7,5,-1,-1},
                                        {8,-1,5,-1,-1},
                                        {8,-1,6,3,4},
                                        {-1,-1,5,-1,-1},
                                        {8,-1,-1,-1,-1}};
            for(int i=0;i<s.size();i++){
                state=transfer[state][get_col(s[i])];
                if(state==-1){
                    return false;
                }
            }
            return (finals&(1<<state))!=0;


     }
        int get_col(char c){
            if(c==' '){
                return 0;
            }
            if(c=='+'||c=='-'){
                return 1;
            }
            if(c>='0'&&c<='9'){
                return 2;
            }
            if(c=='.'){
                return 3;
            }
            if(c=='e'||c=='E'){
                return 4;
            }
            return -1;
     }};
int main(){
    string input;
    cin>>input;
    Solution s;
    cout<<boolalpha<<s.isNumber(input)<<endl;
    
}