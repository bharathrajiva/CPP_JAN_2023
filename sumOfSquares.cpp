#include <iostream>
#include <cmath>
using namespace std;
struct sumofsquare{
    void result(int n){
    cout << (n*(n+1)*(2*n+1))/6;
    }};
struct cubesum{
    void result(int n){
        cout << pow((n*(n+1))/2,2);
    }
};

void program(){
    sumofsquare square;
    cubesum cube;
    int u(0),n(0);
    cout << "Enter the Choice : "<<endl;
    cout << "1 : Sum of Square;"<<endl;
    cout << "2 : Sum of Cubes;"<<endl; 
    cin >> u;
    cout << "Enter the Number :";
    cin >>n;
    switch (u){
        case 1:
         square.result(n);
         break;
        case 2 :
         cube.result(n);
         break;
         default:
         cout << "Enter a valid Number;"<< endl;
         cout << endl;
         program();



    }

}
int main(){
    program();
    return 0;
}