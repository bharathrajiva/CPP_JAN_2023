#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
class Solution {
public:
    // void solveSudoku(vector<vector<char>>& board) {
    //     solver(board);
    // }
    // bool solver(vector<vector<char>>& board){
    //     for(int i=0;i<board.size();i++){
    //         for(int j=0;j<board[0].size();j++){
    //             if(board[i][j]=='.'){
    //             for(char c='1';c<='9';c++){
    //                 if(VaildSudoku(board,i,j,c)==true){
    //                 board[i][j]=c;
    //                 if(solver(board)==true)
    //                     return true;
    //                 else
    //                     board[i][j]='.';
    //                 }
    //             }
    //             return false;
    //             }
    //         }
    //     }
    //     return true;
    // }
    // bool VaildSudoku(vector<vector<char>>& board,int row, int col,char c){
    //     for(int i=0;i<9;++i){
    //         if(board[i][col]==c)
    //             return false;
    //          if(board[row][i]==c)
    //             return false;
    //         if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c)
    //             return false;
    //     }
    //     return true;
    // }
    bool VaildSudoku(vector<vector<char>>& board, int row, int col, char c) {
        for (int i = 0; i < 9; ++i) {
            if (board[i][col] == c) return false;
            if (board[row][i] == c) return false;
            if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c) return false;
        }
        return true;
    }

    bool solver(vector<vector<char>>& board) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] == '.') {
                    for (char c = '1'; c <= '9'; c++) {
                        if (VaildSudoku(board, i, j, c) == true) {
                            board[i][j] = c;
                            if (solver(board) == true) return true;
                            else board[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solver(board);
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    Solution s;
    vector<vector<char>> board = {{'5','3','.','.','7','.','.','.','.'},
                                  {'6','.','.','1','9','5','.','.','.'},
                                  {'.','9','8','.','.','.','.','6','.'},
                                  {'8','.','.','.','6','.','.','.','3'},
                                  {'4','.','.','8','.','3','.','.','1'},
                                  {'7','.','.','.','2','.','.','.','6'},
                                  {'.','6','.','.','.','.','2','8','.'},
                                  {'.','.','.','4','1','9','.','.','5'},
                                  {'.','.','.','.','8','.','.','7','9'}};
    s.solveSudoku(board);
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}