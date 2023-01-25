#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        while(nums1.size()>m){
            nums1.pop_back();
        }
        for(int j=0; j<n; j++){
            nums1.push_back(nums2[j]);
        }
        sort(nums1.begin(), nums1.end());
    }
};
int main(){
    int n(0),m(0);
    vector<int> nums1,nums2;
    cin >>n>>m;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        nums1.push_back(temp);
    }
    for(int i=0;i<m;i++){
        int temp;
        cin >> temp;
        nums2.push_back(temp);}
    Solution s;
    s.merge(nums1,n,nums2,m);
    for(int i=0;i<nums1.size();i++){
        cout << nums1[i] << " ";
    }
    cout << endl;
    return 0;
}

