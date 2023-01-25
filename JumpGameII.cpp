#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int step = 0;
        int start = 0;
        int end = 0;
        while(end < n-1){
            step++;
            int maxend = end + 1;
            for(int i=start; i<=end; i++){
                if(i + nums[i] >= n-1) return step;
                maxend = max(maxend, i + nums[i]);
            }
            start = end + 1;
            end = maxend;
        }
        return step;
    }
};
int main(){
    int n;
    vector<int> nums={};
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    Solution s;
    cout<<s.jump(nums);
}