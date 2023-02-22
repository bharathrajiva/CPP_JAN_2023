#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;
struct Point{
    int x;
    int y;
    Point():x(0),y(0){}
    Point(int a,int b):x(a),y(b){}
};
class Solution{
    public:
    int maxPoints(vector<vector<int>>& points){
        int n=points.size();
        if(n<3) return n;
        int res=0;
        for(int i=0;i<n;i++){
            int same=1;
            int localmax=0;
            unordered_map<double,int> m;
            for(int j=i+1;j<n;j++){
                if(points[i][0]==points[j][0]&&points[i][1]==points[j][1]){
                    same++;
                    continue;
                }
                double slope=points[i][0]==points[j][0]?INT_MAX:1.0*(points[i][1]-points[j][1])/(points[i][0]-points[j][0]);
                m[slope]++;
                localmax=max(localmax,m[slope]);
            }
            res=max(res,localmax+same);
        }
        return res;
    }
};

int main(){
    Solution s;
    vector<vector<int>> points;
    int input;
    cin>>input;
    while(input!=-1){
        vector<int> point;
        point.push_back(input);
        cin>>input;
        point.push_back(input);
        points.push_back(point);
        cin>>input;
    }
    cout<<s.maxPoints(points)<<endl;
    return 0;



    

}