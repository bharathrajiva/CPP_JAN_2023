#include <iostream>

using namespace std;

int reverse(int x) {
    long long result = 0;
    while (x != 0) {
        result = result * 10 + x % 10;
        x /= 10;
    }
    if (result > INT32_MAX || result < INT32_MIN) return 0;
    else return result;
}

int main() {
    int x;
    cin >> x;
    cout << reverse(x) << endl;
    return 0;
}
