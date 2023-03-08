#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<queue>
using namespace std;

class Solution {
    public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int left = 0;
        int right = nums.size()-1;
        int mid = 0;
        while(left<=right){
            mid = (left+right)/2;
            if(nums[mid] == target){
                int i = mid;
                int j = mid;
                while(i>=0 && nums[i] == target) i--;
                while(j<nums.size() && nums[j] == target) j++;
                res.push_back(i+1);
                res.push_back(j-1);
                return res;
            }
            else if(nums[mid] > target) right = mid-1;
            else left = mid+1;
        }
        res.push_back(-1);
        res.push_back(-1);
        return res;
    }
};
int main(){
    ifstream in("input.txt");
    string line;
    while(getline(in,line)){
        cout<<line<<endl;
    }
    return 0;
}
