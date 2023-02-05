#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
sort(nums.begin(), nums.end());
int n=nums.size();
int mn=INT_MAX;
int ans=0;

for(int i=0; i<nums.size(); i++){
    int start=i+1;
    int end=n-1;
    while(start<end){
int sum=nums[i]+nums[start]+nums[end];
int diff=abs(sum-target);

if(diff<mn){
mn=diff;
ans=sum;
    }
if(sum>target)
end--;

else start++;

} 
}
   return ans;
    }
};
int main(){
    int target(0),input(0);
    vector<int> nums;
    do{
        if(std::cin >> input){
            if (input ==-1111111111)
                break;
            nums.push_back(input);
        }
        else{
            std::cin.clear();
            std::cin.ignore(100,'\n');
        }
    }while(true);
    for(int i = 0;i<nums.size();i++)
        std::cout << nums[i] << " ";
    return 0;

}