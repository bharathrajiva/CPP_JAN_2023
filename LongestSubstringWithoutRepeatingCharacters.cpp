#include<iostream>
#include<cmath>
#include<unordered_map>
using namespace std;
class Solution {
    public:
    int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> char_map;
    int max_length = 0;
    int start = 0;
    for (int i = 0; i < s.size(); i++) {
        if (char_map.count(s[i]) && char_map[s[i]] >= start) {
            max_length = max(max_length, i - start);
            start = char_map[s[i]] + 1;
        }
        char_map[s[i]] = i;
    }
    return max(max_length, (int)s.size() - start);
}};
int main(){
    string s;
    cin >> s;
    Solution sol;
    cout << sol.lengthOfLongestSubstring(s);
    return 0;

}