#include<iostream>
using namespace std;
// class Solution{
//     public:
//     int divide(int dividend,int divisor){
//         if(divisor==0){
//             return INT_MAX;
//         }
//         if(dividend==0){
//             return 0;
//         }
//         if(dividend==INT_MIN&&divisor==-1){
//             return INT_MAX;
//         }
//         bool negative=(dividend>0)^(divisor>0);
//         long long dvd=labs(dividend);
//         long long dvs=labs(divisor);
//         int result=0;
//         while(dvd>=dvs){
//             long long temp=dvs,multiple=1;
//             while(dvd>=(temp<<1)){
//                 temp<<=1;
//                 multiple<<=1;
//             }
//             dvd-=temp;
//               result+=multiple;
//       }
//         return negative?-result:result;
//     }

// };
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == -2147483648 && divisor == -1) return 2147483647;
        int div = dividend/divisor;
        return div;
    }
};
int main(){
    int dividend,divisor;
    cin>>dividend>>divisor;
    Solution s;
    cout<<s.divide(dividend,divisor)<<endl;
    return 0;
}