#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;
class Solution {
    public:
    vector<int> diffWaysToCompute(string expression){
        vector<int> res;
        for(int i = 0; i < expression.size(); i++){
            if(expression[i] == '+' || expression[i] == '-' || expression[i] == '*'){
                vector<int> left = diffWaysToCompute(expression.substr(0, i));
                vector<int> right = diffWaysToCompute(expression.substr(i+1));
                for(int j = 0; j < left.size(); j++){
                    for(int k = 0; k < right.size(); k++){
                        if(expression[i] == '+') res.push_back(left[j] + right[k]);
                        else if(expression[i] == '-') res.push_back(left[j] - right[k]);
                        else if(expression[i] == '*') res.push_back(left[j] * right[k]);
                    }
                }
            }
        }
        if(res.empty()) res.push_back(stoi(expression));
        return res;
    }
};
int main(){
    string s;
    cin >> s;
    Solution s1;
    vector<int> res = s1.diffWaysToCompute(s);
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    return 0;
}