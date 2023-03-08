#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
class Solution{
    public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int mid = 0;
        while(left<=right){
            mid = (left+right)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) right = mid-1;
            else left = mid+1;
        }
        return left;
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
