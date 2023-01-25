#include<iostream>
#include<cmath>
#include<unordered_map>
using namespace std;
class Solution{
    public:
    string longestPalindrome(string s){
        int n = s.size();
        int max_length = 0;
        int start = 0;
        for (int i = 0; i < n; i++) {
            int left = i;
            int right = i;
            while (left >= 0 && right < n && s[left] == s[right]) {
                left--;
                right++;
            }
            if (max_length < right - left - 1) {
                max_length = right - left - 1;
                start = left + 1;
            }
            left = i;
            right = i + 1;
            while (left >= 0 && right < n && s[left] == s[right]) {
                left--;
                right++;
            }
            if (max_length < right - left - 1) {
                max_length = right - left - 1;
                start = left + 1;
            }
        }
        return s.substr(start, max_length);
    }
};
int main(){
    string s;
    cin >> s;
    Solution sol;
    cout << sol.longestPalindrome(s);
    return 0;
}