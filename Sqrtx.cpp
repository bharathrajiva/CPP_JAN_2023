#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        return sqrt(x);
    }
};
int main(){
    int n;
    cin>>n;
    Solution s;
    cout<<abs(s.mySqrt(n));
}