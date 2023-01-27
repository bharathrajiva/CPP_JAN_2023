#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
class Solultion{
    public:
    int removeElement(vector<int>& nums, int val){
        int count = 0;
        int len = nums.size();
        for(int i = 0; i < len; i++){
            if(nums[i] == val){
                nums[i] = INT_MAX;
                count+=1;
            }
        }
        sort(nums.begin(), nums.end());

        return len - count;
    }};
int main(){
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    Solultion s;
    int len = s.removeElement(nums, val);
    cout << len << endl;
    for(int i = 0; i < len; i++){
        cout << nums[i] << " ";
    }
    return 0;

}