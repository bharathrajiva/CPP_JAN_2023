#include<iostream>
#include<fstream>
#include<string>
#include<queue>
using namespace std;
class Solution{
    public:
    int maxProfit(vector<int>& prices){
        int n=prices.size();
        if(n<2) return 0;
        vector<int> left(n,0);
        vector<int> right(n,0);
        int minPrice=prices[0];
        for(int i=1;i<n;i++){
            left[i]=max(left[i-1],prices[i]-minPrice);
            minPrice=min(minPrice,prices[i]);
        }
        int maxPrice=prices[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]=max(right[i+1],maxPrice-prices[i]);
            maxPrice=max(maxPrice,prices[i]);
        }
        int profit=0;
        for(int i=0;i<n;i++){
            profit=max(profit,left[i]+right[i]);
        }
        return profit;
    }
};
int main(){
    Solution s;
    vector<int> prices;
    int input_size;
    cin>>input_size;
    for(int i=0;i<input_size;i++){
        int temp;
        cin>>temp;
        prices.push_back(temp);
    }
    cout<<s.maxProfit(prices)<<endl;
     return 0;
}