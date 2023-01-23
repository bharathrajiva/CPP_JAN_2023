//optimized
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y;
        cin>>x>>y;
        long long int n=(x*y)-x-y;
        if(n==-1)
        {
            n=max(x,y)-1;
        }
        else if(n==0)
        {
            n=2;
        }
        if(n==0)
        {
            n=5;
        }
        cout<<n<<endl;
    }
    return 0;
}
// #include<iostream>
// using namespace std;
// int awesome(long x,long y){
//     long res(0);
//     res = x*y -x-y;
//     if(res>=1&&res<=100'000'000'000'000'0000){
//         res=res;
//     }
//     else if(res==0){
//     return 2;}
//     else if(x==1 && y==1){
//         res=5;
//     }
//     else if(res==-1){
//         res=max(x,y)-1;

//     }
//     return res;

    
// }
// int main(){
//     long t,x,y,i(0);
//     cin >> t;
//     while(i<t){
//         cin >> x>>y;
//         cout<<awesome(x,y)<<endl;
//         i++;
//     }
//     return 0;
    
// }
//brute force
// #include<iostream>
// using namespace std;
// int awesome(long x,long y){
//     long res(0);
//     for(long i =min(x,y);i<x*y;i++){
//         if((i+x)%y==0 & (i+y)%x==0){
//             res=i;
//             break;
//         }
//     }
//     return res;

    
// }
// int main(){
//     long t,x,y,i(0);
//     cin >> t;
//     while(i<t){
//         cin >> x>>y;
//         cout<<awesome(x,y)<<endl;
//         i++;
//     }
//     return 0;
    
// }