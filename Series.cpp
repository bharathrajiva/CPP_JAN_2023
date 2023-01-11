#include <iostream>
using namespace std;
int main(){
    int input,initial1(30),initial2(35),k(0),j(0);
    cin >> input;
    for(int i=0;i<input;i++){
        if(i%2==0 || i ==0 ){
            cout << initial1 <<" ";
            initial1 += (k+1)*8;
            k++;
        }
        if(i%2!=0 || i==1 ){
            cout<< initial2 << " ";
            initial2 += (j+1)*6;
            j++;
        }
    }
}