#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
string helper(int num,vector<string>& v2,vector<string>& v3,vector<string>& v4){
    if(num==0) return "";
    else if(num<10) return v2[num]+" ";
    else if(num<20) return v3[num-10]+" ";
    else if(num<100) return v4[num/10]+" "+helper(num%10,v2,v3,v4);
    else return v2[num/100]+" Hundred "+helper(num%100,v2,v3,v4);
}
class Solution{
    public:
    string numberToWords(int num){
        if(num==0) return "Zero";
        string res;
        vector<string> v1={"","Thousand","Million","Billion"};
        vector<string> v2={"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
        vector<string> v3={"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
        vector<string> v4={"","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
        int i=0;
        while(num>0){
            if(num%1000!=0){
                res=helper(num%1000,v2,v3,v4)+v1[i]+" "+res;
            }
            num/=1000;
            i++;
        }
        while(res.back()==' ') res.pop_back();
        return res;
    }
};
int main(){
    Solution s;
    int input;
    cin>>input;
    cout<<s.numberToWords(input)<<endl;

    return 0;
}