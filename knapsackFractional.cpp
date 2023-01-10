#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct item{
    int value;
    int weight;
    item(int value, int weNight):value(value) , weight(weight){

    }
};
bool cmp(item a,item b){
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1>r2;
}

double knapsack(item arr[],int N , int size){
    sort(arr,arr+size,cmp);
    int curWeight =0;
    double finalvalue = 0.0;
    for (int i =0; i <size;i++){
        if (curWeight + arr[i].weight <=N){
            curWeight += arr[i].weight;
            finalvalue +=arr[i].value;
        }
        else{
            int remain = N-curWeight;
            finalvalue+=arr[i].value*((double) remain/arr[i].weight);
            break;
        }
    }

}


int main(){
int N,size,val(0),w(0);
cout << "Enter the value of Max capacity : "<<endl;
cin >> N;
cout << "Enter the number of items Available : "<<endl;
cin >>size;
cout <<endl<<"Enter the "<<size << "pairs in the following format value,weight : "<<endl;
item arr[] ;
for (int i =0;i<N;i++){
    cin >> val >>w;
    cout << endl;
    arr[i].value = val;
    arr[i].weight = w;
}
}