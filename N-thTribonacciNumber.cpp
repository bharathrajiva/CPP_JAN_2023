#include<iostream>
using namespace std;
class Solution {
public:
    int tribonacci(int n) {
        int a(0),b(1),c(1),d(0);
        if(n==0)
        return n;
        if(n==1||n==2)
        return n;
        for(int i=3;i<n+1;i++){
            d = a+b+c;
            a=b;
            b=c;
            c=d;

        }
        return d;
        
    }
};
int main(){
    int input;
    cin>>input;
    Solution s;
    cout<<s.tribonacci(input);
    return 0;
}