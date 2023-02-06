#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
//Test Cases: 18/52
class Solution {
    public:
    int strongPasswordChecker(string password){
        int n=password.size();
        int lower=1,upper=1,digit=1;
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            if(islower(password[i])){
                lower=0;
            }
            if(isupper(password[i])){
                upper=0;
            }
            if(isdigit(password[i])){
                digit=0;
            }
            if(i>1 && password[i]==password[i-1] && password[i-1]==password[i-2]){
                int len=2;
                while(i<n && password[i]==password[i-1]){
                    len++;
                    i++;
                }
                v.push_back(len/3);
            }
        }
        int missing=(lower+upper+digit);
        if(n<6){
            return max(missing,6-n);
        }
        int over=n-20;
        int left=0;
        if(over>0){
            int i=0;
            while(over>0){
                if(v[i]<8){
                    int need=(8-v[i]);
                    v[i]+=min(need,over);
                    over-=need;
                }
                i++;
            }
            int total=0;
            for(int j=0;j<v.size();j++){
                if(v[j]>=8){
                    total+=(v[j]-2)/3;
                }
            }
            return over+max(missing,total);
        }
        else{
            int total=0;
            for(int j=0;j<v.size();j++){
                if(v[j]>=8){
                    total+=(v[j]-2)/3;
                }
            }
            return max(missing,total);
        }
    }
};
// Special Case: 18 I/O : aaa111;
// class Solution {
// public:
//     int strongPasswordChecker(string password) {
//         int n = password.size();
//         int lower = 1, upper = 1, digit = 1;
//         int repeat = 0;
//         int required_change = 0;

//         for (int i = 0; i < n; i++) {
//             if (islower(password[i])) {
//                 lower = 0;
//             }
//             if (isupper(password[i])) {
//                 upper = 0;
//             }
//             if (isdigit(password[i])) {
//                 digit = 0;
//             }
            
//             int j = i;
//             while (i < n - 1 && password[i + 1] == password[i]) {
//                 i++;
//                 repeat++;
//             }
//             if (i - j >= 2) {
//                 required_change += (i - j + 2) / 3;
//             }
//         }

//         if (n < 6) {
//             return max(6 - n, 3 - (lower + upper + digit));
//         }

//         if (n <= 20) {
//             return max(3 - (lower + upper + digit), required_change);
//         }

//         int over = n - 20;
//         required_change -= min(over, repeat);
//         required_change = max(required_change, 0);
//         return over + max(3 - (lower + upper + digit), required_change);
//     }
// };

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Solution s;
    string password;
    cin>>password;
    cout<<s.strongPasswordChecker(password);

    return 0;
}