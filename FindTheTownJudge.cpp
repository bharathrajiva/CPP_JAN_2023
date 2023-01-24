#include<iostream>
#include <vector>
using namespace std;

int findJudge(int N, vector<vector<int>>& trust) {
    vector<int> trustCount(N + 1, 0);
    vector<int> trustedBy(N + 1, 0);
    for (auto t : trust) {
        trustCount[t[0]]++;
        trustedBy[t[1]]++;
    }
    for (int i = 1; i <= N; i++) {
        if (trustCount[i] == 0 && trustedBy[i] == N - 1) {
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    vector<vector<int>> b;
    vector<int> c;
    
}