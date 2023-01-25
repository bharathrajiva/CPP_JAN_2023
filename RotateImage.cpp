#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0; i<n; i++)
            for(int j=i+1; j<n; j++)
                swap(matrix[i][j], matrix[j][i]);

        for(int i=0, k=n-1; i<k; i++, k--){
            for(int j=0; j<n; j++){
                swap(matrix[j][i],matrix[j][k]);
    }}}
};
int main(){
    int n;
    
    vector<vector<int>> matrix2;
    cin>>n;
    for(int j=0;j<n;j++){
        vector<int> matrix={};
        for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        matrix.push_back(temp);
    }
    matrix2.push_back(matrix);
    }
    Solution s;
    s.rotate(matrix2);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }
    }
