#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<queue>
#include<unordered_set>
#include<unordered_map>
#include<algorithm>
using namespace std;
class Solution {
    public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> temp;
        sort(candidates.begin(),candidates.end());
        combinationSum(candidates,target,result,temp,0);
        return result;
    }
    void combinationSum(vector<int>& candidates, int target,vector<vector<int>>& result,vector<int>& temp,int start){
        if(target==0){
            result.push_back(temp);
            return;
        }
        for(int i=start;i<candidates.size();i++){
            if(candidates[i]>target){
                break;
            }
            temp.push_back(candidates[i]);
            combinationSum(candidates,target-candidates[i],result,temp,i);
            temp.pop_back();
        }
    }
};
int main(){
    vector<int> input;
    int target;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        input.push_back(temp);
    }
    cout<<"target:";
    cin>>target;
    Solution s;
    vector<vector<int>> result = s.combinationSum(input,target);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}