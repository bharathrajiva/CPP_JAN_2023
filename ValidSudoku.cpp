#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {
            int row[9][9] = {0};
            int col[9][9] = {0};
            int box[9][9] = {0};
            for(int i = 0; i < 9; i++) {
                for(int j = 0; j < 9; j++) {
                    if(board[i][j] != '.') {
                        int num = board[i][j] - '1';
                        int k = i / 3 * 3 + j / 3;
                        if(row[i][num] || col[j][num] || box[k][num]) {
                            return false;
                        }
                        row[i][num] = col[j][num] = box[k][num] = 1;
                    }
                }
            }
            return true;
        }} ;
int main(){
    Solution s;
    vector<vector<char>> board;
        for(int i =0;i<9;i++){
            for(int j=0;j<9;j++){
                cin>>board[i][j];
            }}
    cout <<boolalpha<< s.isValidSudoku(board) << endl;
    return 0;
}