#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >>n;
        vector<int> c(n);
        int xor=0;
        for(int i =0; i<n;i++){
            cin >> c[i];
            xor ^= c[i];
        }
        if(n==1){
            cout<<"YES"<<endl;

        }
        else{
            int val= c[0] ^ xor;
            for(int i =1;i<n-1;i++){
                c[i]^=val;
                val = c[i]^xor;
            }
            if(c[n-1]!=c[n-2]){
                cout<<"NO"<<endl;
            }
            else
            cout<<"YES"<<endl;
        }
    }
    return 0;
}