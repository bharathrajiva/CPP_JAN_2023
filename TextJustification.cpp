#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <algorithm>
using namespace std;
class Solution {
public:
	vector<string> fullJustify(vector<string>& words, int maxWidth) {
		int n = words.size();
		vector<string> ans;
		int i = 0;
		while (i < n) {
			int j = i, numOfWord = 0, spaceBetween = 0;
			while (j < n && maxWidth >= (numOfWord + spaceBetween + words[j].size())) {
				numOfWord += words[j].size();
				spaceBetween++;
				j++;
			}
			spaceBetween--;
			string res = "";
			int rem = maxWidth - numOfWord;
			int numOfSpace = spaceBetween <= 0 ? 0 : rem / spaceBetween;
			int extraSpace = spaceBetween <= 0 ? 0 : rem % spaceBetween;
			if (j == n) {
				numOfSpace = 1;
				extraSpace = 0;
			}
			while (i < n && i < j) {
				res += words[i];
				int k = 0;
				while (spaceBetween > 0 && k < numOfSpace) {
					res += " ";
					k++;
				}
				spaceBetween--;
				if (extraSpace > 0) {
					res += " ";
					extraSpace--;
				}
				i++;
			}
			while (res.size() != maxWidth) res += " ";
			ans.push_back(res);
		}
		return ans;
	}
};
int main() {
    int n;
    cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++)
        cin >> words[i];
    int maxWidth;
    cin >> maxWidth;
    Solution s;
    vector<string> ans = s.fullJustify(words, maxWidth);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
    return 0;
}