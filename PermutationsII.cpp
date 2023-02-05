#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void recursion(vector<int> num, int i, int j, vector<vector<int> > &res) {
        if (i == j-1) {
            res.push_back(num);
            return;
        }
        for (int k = i; k < j; k++) {
            if (i != k && num[i] == num[k]) continue;
            swap(num[i], num[k]);
            recursion(num, i+1, j, res);
        }
    }
    vector<vector<int> > permuteUnique(vector<int> &num) {
        sort(num.begin(), num.end());
        vector<vector<int> >res;
        recursion(num, 0, num.size(), res);
        return res;
    }
};
int main() {
    vector<int> nums;
    int inputsize;
    cout <<"Enter the size of the array: "<<endl;
    cin >> inputsize;
    for(int i = 0; i < inputsize; i++) {
        int input;
        cin >> input;
        nums.push_back(input);
    }
    Solution s;
    vector<vector<int>> result = s.permuteUnique(nums);
    for(int i = 0; i < result.size(); i++) {
        for(int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}