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
 class Solution{
    public:
     int calculate( string s ){
            int n = s.size();
            stack<int> st;
            int num = 0;
            char sign = '+';
            for( int i = 0; i < n; i++ ){
                if( isdigit( s[i] ) ){
                    num = num * 10 + ( s[i] - '0' );
                }
                if( !isdigit( s[i] ) && !isspace( s[i] ) || i == n - 1 ){
                    if( sign == '-' ){
                        st.push( -num );
                    }
                    if( sign == '+' ){
                        st.push( num );
                    }
                    if( sign == '*' ){
                        int temp = st.top();
                        st.pop();
                        st.push( temp * num );
                    }
                    if( sign == '/' ){
                        int temp = st.top();
                        st.pop();
                        st.push( temp / num );
                    }
                    sign = s[i];
                    num = 0;
                }
            }
            int res = 0;
            while( !st.empty() ){
                res += st.top();
                st.pop();
            }
            return res;
        }};
int main()
{
    string s;
    cin >> s;
    Solution s1;
    cout << s1.calculate(s) << endl;

    return 0;
}
