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
    bool isUgly(int num) {
        if(num == 0)
            return false;
        while(num % 2 == 0)
            num /= 2;
        while(num % 3 == 0)
            num /= 3;
        while(num % 5 == 0)
            num /= 5;
        return num == 1;
    }
};
int main(){
    int num;
    cin>>num;
    Solution s;
    cout<<boolalpha<<s.isUgly(num);
    return 0;
}