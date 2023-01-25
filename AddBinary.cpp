#include<iostream>
#include<bitset>
#include<string>
using namespace std;
class Solution{
    public:
    string addBinary(string a , string b){
        bitset<10> bits_a(a);
        bitset<10> bits_b(b);
        return (bits_a & bits_b).to_string();
    }
};
int main(){
    string a,b;
    cin >>a>>b;
    Solution s;
    cout << s.addBinary(a,b);
}