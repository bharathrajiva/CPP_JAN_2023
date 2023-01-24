#include <iostream>
#include <string>

using namespace std;

bool isMatch(string s, string p) {
    int m = s.length();
    int n = p.length();
    int i = 0, j = 0, star = -1, match = 0;
    while (i < m) {
        if (j < n && p[j] == '*') {
            match = i;
            star = j++;
        } else if (j < n && (s[i] == p[j] || p[j] == '?')) {
            i++;
            j++;
        } else if (star != -1) {
            i = ++match;
            j = star + 1;
        } else {
            return false;
        }
    }
    while (j < n && p[j] == '*') j++;
    return j == n;
}

int main() {
    string s, p;
    cin >> s >> p;
    cout << boolalpha << isMatch(s, p) << endl;
    return 0;
}
