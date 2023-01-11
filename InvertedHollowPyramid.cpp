// Inverted Hollow Pyramid

 

// The much awaited event at the entertainment industry every year is the "Screen Awards". This year the event is going to be organized on December 25 to honour the Artists for their professional excellence in Cinema. The Organizers of the event, J&R Events, decided to design some attractive and LED Matrix panel boards for the show promotions all across the venue.

 

// The Event organizers wanted to program the display boards with some specific pattern using alphabets and special characters. Help them write a program to design the pattern of an inverted hollow pyramid in the matrix panel, given the number of lines of the pattern



// Input format
// First line of the input is an integer that refers to the number of lines in the pattern

// Output format
// Output the pattern as given in the output.
// You are using GCC
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cin>>n;
    k=(n*2)-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
        {
            if((i==0)||(i==j)||(j==k-i-1)){cout<<"*";}
            else if((j<i)||(j>=k-i))
            {cout<<"b";}
            else{cout<<"i";}
        }
        cout<<"\n";
    }
    return 0;
}
