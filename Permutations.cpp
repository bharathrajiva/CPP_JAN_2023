#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
vector<vector<int>>ans;
    void permutation(vector<int>&arr,int start){
        if(start==arr.size())
        ans.push_back(arr);

        for(int i=start;i<arr.size();i++){
              swap(arr[i],arr[start]);
              permutation(arr,start+1);
              swap(arr[i],arr[start]);
        }
    }
    vector<vector<int>> permute(vector<int>& arr) {
        
        vector<int>temp;
        permutation(arr,0);
        return ans;
    }
};
int main(){
    int n;
    vector<vector<int>> res;
    vector<int> nums={};
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    Solution s;
    res=s.permute(nums);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}