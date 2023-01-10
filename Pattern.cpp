#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k(20);
    cout << "Enter the value of N: " <<endl;
    cin >> n;
    cout << k<<" ";
    for (int i= 0;i<n-1;i++){
        k += 40+(4*i);
        cout << k << " ";
        
    }

} 