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
class Solution
{

public:
    bool isPossible(vector<int> &nums)
    {
        unordered_map<int, int> freq;
        unordered_map<int, int> appendfreq;
        for (int i = 0; i < nums.size(); i++)
            freq[nums[i]]++;
        for (int i = 0; i < nums.size(); i++)
        {
            if (freq[nums[i]] == 0)
                continue;
            else if (appendfreq[nums[i]] > 0)
            {
                appendfreq[nums[i]]--;
                appendfreq[nums[i] + 1]++;
            }
            else if (freq[nums[i] + 1] > 0 && freq[nums[i] + 2] > 0)
            {
                freq[nums[i] + 1]--;
                freq[nums[i] + 2]--;
                appendfreq[nums[i] + 3]++;
            }
            else
                return false;
            freq[nums[i]]--;
        }
        return true;
    }
};
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    Solution s;
    cout << s.isPossible(nums);
    return 0;
}