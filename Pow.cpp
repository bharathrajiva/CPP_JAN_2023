#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
        double myPow(double x, int n) {
    if (n == 0) return 1;
    double half = myPow(x, n/2);
    if (n % 2 == 0) return half * half;
    else if (n > 0) return half * half * x;
    else return half * half / x;
}

};
int main(){
    Solution s;
    double x;
    int n;
    cin>>x>>n;
    cout<<s.myPow(x,n)<<endl;
    return 0;

}
