#include<iostream>
#include<vector>
#include<string>    
#include<numeric>
using namespace std;

class Solution {
public:
    int fact(int n) {
        if(n==1 || n==0)
            return 1;
        return n*fact(n-1);
    }
    string getPermutation(int n, int k) {
        if(n==1)
            return string("1",1);
        vector<int> v(n);
        iota(v.begin(), v.end(),1);
        string str = "";        
        while(str.size()!=n) {
            k--;
            int perm = fact(n-str.size()-1);
            int num = k/perm;
            str+=((v[num])+'0');
            v.erase(v.begin() + num);
            k = (k+1)%perm; 
            if(k==0)
                k= perm;
        }
        return str;
    }
};
int main(){
    int n,k;
    cin>>n>>k;
    Solution sol;
    cout<<sol.getPermutation(n,k);
    return 0;
}