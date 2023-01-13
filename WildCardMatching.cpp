// <!-- Wildcard Matching

// Sunil is a little scientist. Sunil has planned to design a wildcard pattern matcher to exhibit at the "Young Inventors", a tech talent show organized at his school.

// Sunil wanted to design the wildcard pattern matcher supporting the wildcard character '?'. The wildcard character '?' can be substituted by any single lower case English letter for matching. He has two strings X and Y of equal length, made up of lower case letters and the character '?'.

// Sunil wants your help in designing the device, to know whether the strings X and Y can be matched or not. Write a program to check whether the given strings can be matched or not.



// Input format
// First line of the input contains the string ‘X’.

// Second line of the input contains the string ‘Y’.

// Output format
// Output a single line with the word "Yes"(without quotes) if the strings can be matched, otherwise output "No"(without quotes). -->
// You are using GCC
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,len,s=0;
    char a[50],b[50];
    cin>>a;
    cin>>b;
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]!=b[i]){if((a[i]!=63)&&(b[i]!=63)){s=1;break;}}
    }
    (s==0)?cout<<"Yes":cout<<"No";
    return 0;
}