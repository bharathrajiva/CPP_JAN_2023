#include <iostream>
using namespace std;
int numberOfOnes (int n){
int count=0;
while(n!=0){
n=n&(n-1);
count++;
}
return count;
}
int main(){
    int t;
    cin>>t;
while(t--){
int n,y;
cin>>n>>y;
int a[n];
int arrOR=0;
for(int i=0; i<n; i++){
cin>>a[i];
arrOR = a[i] | arrOR;
}
int x = numberOfOnes (arrOR);
int temp = numberOfOnes (y);
if(x>temp || (x==temp && y!=arrOR))
cout<<-1<<endl;
else{
int res=0;
for(int i=0; i<=y; i++){
if((arrOR|i)==y){
res=i;
break;
}
}
cout<<res<<endl;
}
}
return 0;

}