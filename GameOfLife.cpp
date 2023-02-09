#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<queue>
#include<unordered_set>
#include<unordered_map>
#include<stack>
#include<algorithm>
using namespace std;
class Solution {
public:
    int Sum(vector<vector<int>> &board, int r, int c)
    {
        int sum=0;
        for(int i=r-1; i<=r+1; i++)
        {
            for(int j=c-1; j<=c+1; j++)
            {
                if((i==r && j==c) || i<0 || j<0 || i==board.size() 
                   || j==board[0].size()) 
                    continue;
                sum += (board[i][j] %2); 
            }
        }
        return sum;
    }
    void gameOfLife(vector<vector<int>>& board) 
    {
        int r=board.size(), c=board[0].size();
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                int sum = Sum(board, i, j);
                if(board[i][j] && (sum<2 || sum>3)) 
                    board[i][j] = 3; 
                if(!board[i][j] && sum==3) 
                    board[i][j] = 2; 
            }
        } 
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(board[i][j] == 3) board[i][j] = 0; 
                if(board[i][j] == 2) board[i][j] = 1;   
            }
        }
    }
};
int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> board(n, vector<int>(m));
    for(int i=0; i < n; i++)
        for(int j=0; j < m; j++)
            cin>>board[i][j];
    Solution s;
    s.gameOfLife(board);
    for(int i=0; i < n; i++)
    {
        for(int j=0; j < m; j++)
            cout<<board[i][j]<<" ";
        cout<<endl;
    }
}