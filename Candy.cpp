#include<iostream>
#include<fstream>
#include<string>
#include<queue>
#include<stack>
using namespace std; 
class Solution{
    public:
    int candy(vector<int>& ratings){
        int n=ratings.size();
        vector<int> left(n,1);
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1]){
                left[i]=left[i-1]+1;
            }
        }
        int right=0,ret=0;
        for(int i=n-1;i>=0;i--){
            if(i<n-1&&ratings[i]>ratings[i+1]){
                right++;
            }else{
                right=1;
            }
            ret+=max(left[i],right);
        }
        return ret;
    }
};
int main(){
    Solution s;
    vector<int> input;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        input.push_back(temp);
    }
    cout<<s.candy(input)<<endl;
    return 0;
}