#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        sort(strs.begin(), strs.end());
        string x="";
        for(int i=0;i<strs[0].size();i++)
        {
            if(strs[0][i]==strs[strs.size()-1][i])
            {
                x=x+strs[0][i];
            }
            else
            {
                return x;
            }
        }
        return x;
    }

    };
int main(){
    string val;
std::vector<string> vec; 
do {
  if(std::cin >> val) {
    if(val == "Stop_Now") break;
    vec.push_back(val);
  } else { 
    std::cin.clear();
    std::cin.ignore(1,'\n');
  }
} while(true);
Solution s;
string result = s.longestCommonPrefix(vec);
for(int i=0;i<vec.size();i++)
    cout<<vec[i]<<endl;
cout<<"LONGEST COMMON PREFIX : " <<result;
return 0;

}