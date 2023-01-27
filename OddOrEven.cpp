#include<iostream>
using namespace std;
int main(){
    int n,m,k,s(1),s1(1),res(0),res1(0);
    cin>>n>>m;
    k = n+m;
    if(k%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
    while(s!=0){
        int temp1,temp2;
        cin>>temp1>>temp2;
        if(temp1==temp2){
            s=0;
            cout<<"Player 1 score : ";
            cout<< res<<endl;
        }
        else{
            res+=temp1+temp2;
        }}
    while(s1!=0){
        int temp1,temp2;
        cin>>temp1>>temp2;
        if(temp1==temp2){
            s1=0;
            cout<<"Player 2 score : ";
            cout<< res1<<endl;
        }
        else{
            res1+=temp1+temp2;
        }
    }
    if(res>res1){
        cout<<"Player 1 wins ";
    }
    else{
        cout<<"Player 2 wins ";
    }
    return 0;
}
