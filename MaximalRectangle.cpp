#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<queue>
#include<unordered_set>
#include<unordered_map>
using namespace std;
class Solution {
    public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.size()==0){
            return 0;
        }
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> left(n,0);
        vector<int> right(n,n);
        vector<int> height(n,0);
        int maxArea = 0;
        for(int i=0;i<m;i++){
            int curLeft = 0;
            int curRight = n;
            for(int j=0;j<n;j++){
                if(matrix[i][j]=='1'){
                    height[j]++;
                }else{
                    height[j]=0;
                }
            }
            for(int j=0;j<n;j++){
                if(matrix[i][j]=='1'){
                    left[j]=max(left[j],curLeft);
                }else{
                    left[j]=0;
                    curLeft=j+1;
                }
            }
            for(int j=n-1;j>=0;j--){
                if(matrix[i][j]=='1'){
                    right[j]=min(right[j],curRight);
                }else{
                    right[j]=n;
                    curRight=j;
                }
            }
            for(int j=0;j<n;j++){
                maxArea=max(maxArea,(right[j]-left[j])*height[j]);
            }
        }
        return maxArea;
    }
};
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<char>> input;
    for(int i=0;i<m;i++){
        vector<char> temp;
        for(int j=0;j<n;j++){
            char c;
            cin>>c;
            temp.push_back(c);
        }
        input.push_back(temp);
    }
    Solution s;
    cout<<s.maximalRectangle(input)<<endl;
    return 0;
}