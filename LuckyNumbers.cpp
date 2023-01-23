// Problem
// Chef calls a number lucky if it contains the digit 77 at least once.

// Given a number XX, determine if it is a lucky number or not.

// Input Format
// The first line contains a single integer TT — the number of test cases. Then the test cases follow.
// The first and only line of each test case contains an integer XX — the number mentioned in the problem statement.
// Output Format
// For each test case, output YES if XX is a lucky number. Otherwise, output NO.

// You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

// Constraints
// 1 \leq T \leq 10001≤T≤1000
// 1 \le X \le 10^91≤X≤10 
// 9
 
// Sample 1:
// Input
// Output
// 4
// 6
// 478
// 2090
// 77777
// NO
// YES
// NO
// YES
#include<iostream>
using namespace std;
int lucky(string in){
    bool k(false);
    for(int i=0;i<in.length();i++){
        if(in[i]=='7'){
         k=true;
         break;
        }
    }
    if(k==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
int input(){
    string in;
    cin >> in;
    lucky(in);
    return 0;
    
}
int main(){
    int it(0),i(0);
    cin >>it;
    while(i<it){
        input();
        i++;
    }
    return 0;
}