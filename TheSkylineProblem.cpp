#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<queue>
using namespace std;
// Non Overlapping Intervals
// class Solution{
//     public:
//     vector<vector<int>> getSkyline(vector<vector<int>>& buildings){
//         vector<vector<int>> result;
//         multimap<int,int> map;
//         for(auto building:buildings){
//             map.insert({building[0],-building[2]});
//             map.insert({building[1],building[2]});
//         }
//         multiset<int> heights={0};
//         vector<int> last={0,0};
//         for(auto it=map.begin();it!=map.end();it++){
//             if(it->second<0){
//                 heights.insert(-it->second);
//             }
//             else{
//                 heights.erase(heights.find(it->second));
//             }
//             auto maxHeight=*heights.rbegin();
//             if(last[1]!=maxHeight){
//                 last[0]=it->first;
//                 last[1]=maxHeight;
//                 result.push_back(last);
//             }
//         }
//         return result;
//     }

// };
// Special Case ;
// class Solution {
// public:
//     vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
//         vector<vector<int>> result;
//         vector<pair<int, int>> heights;
//         for (auto b : buildings) {
//             heights.push_back({b[0], -b[2]});
//             heights.push_back({b[1], b[2]});
//         }
//         sort(heights.begin(), heights.end(), [](pair<int, int> a, pair<int, int> b) {
//             return a.first == b.first ? a.second > b.second : a.first < b.first;
//         });
//         priority_queue<int> heightPQ;
//         heightPQ.push(0);
//         int prevHeight = 0;
//         for (auto h : heights) {
//             if (h.second < 0) {
//                 heightPQ.push(-h.second);
//             } else {
//                 heightPQ.pop();
//                 while (!heightPQ.empty() && heightPQ.top() == h.second) {
//                     heightPQ.pop();
//                 }
//             }
//             int currHeight = heightPQ.top();
//             if (prevHeight != currHeight) {
//                 result.push_back({h.first, currHeight});
//                 prevHeight = currHeight;
//             }
//         }
//         return result;
//     }
// };
class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<vector<int>> result;
        vector<pair<int, int>> heights;
        for (auto b : buildings) {
            heights.push_back({b[0], -b[2]});
            heights.push_back({b[1], b[2]});
        }
        sort(heights.begin(), heights.end(), [](pair<int, int> a, pair<int, int> b) {
            return a.first == b.first ? a.second > b.second : a.first < b.first;
        });
        priority_queue<int> heightPQ;
        heightPQ.push(0);
        int prevHeight = 0;
        for (auto h : heights) {
            if (h.second < 0) {
                heightPQ.push(-h.second);
            } else {
                if (heightPQ.top() == h.second) {
                    heightPQ.pop();
                }
                while (!heightPQ.empty() && heightPQ.top() == h.second) {
                    heightPQ.pop();
                }
            }
            int currHeight = heightPQ.top();
            if (prevHeight != currHeight) {
                result.push_back({h.first, currHeight});
                prevHeight = currHeight;
            }
        }
        return result;
    }
};

   
int main(){
    Solution s;
    vector<vector<int>> buildings={{2,9,10},{3,7,15},{5,12,12},{15,20,10},{19,24,8}};
    vector<vector<int>> result=s.getSkyline(buildings);
    for(auto line:result){
        for(auto point:line){
            cout<<point<<" ";
        }
        cout<<endl;
    }
    return 0;
}
