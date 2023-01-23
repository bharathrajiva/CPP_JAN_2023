// The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)
#include<iostream>
using namespace std;
string convert(string s, int numRows) {
    int len = s.length();
    if(numRows==1) return s;
    string ans="";
    for(int i=0;i<numRows;i++){
        int j=i;
        while(j<len){
            ans+=s[j];
            if(i!=0 && i!=numRows-1){
                int k = j+2*(numRows-i-1);
                if(k<len) ans+=s[k];
            }
            j+=2*(numRows-1);
        }
    }
    return ans;
}
int main(){
    string s;
    int numRows;
    cin>>s>>numRows;
    cout<<convert(s,numRows);
}