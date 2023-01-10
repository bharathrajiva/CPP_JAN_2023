// Hollow Pyramid

 

// The much awaited event at the entertainment industry every year is the "Screen Awards". This year the event is going to be organized on December 25 to honour the Artists for their professional excellence in Cinema. The Organizers of the event, J&R Events, decided to design some attractive and LED Matrix panel boards for the show promotions all across the venue.

 

// The Event organizers wanted to program the display boards with some specific pattern using alphabets and special characters. Help them write a program to design the pattern of a hollow pyramid in the matrix panel, given the number of lines of the pattern.



// Input format
// First line of the input is an integer that refers to the number of lines in the pattern.

// Output format
// Output the pattern as given in the output.

// bbb*bbb
// bb*i*bb
// b*iii*b
// *******

// You are using GCC
#include <iostream>
using namespace std;
int main(){
    int input;
    cin >> input;
    int k(1);
    char b='b',e='i',a='*';
    cout<<string(input-1,b)<<"*"<<string(input-1,b)<<endl;
    for(int i=input-1;i>1;i--){
        
        cout<<string(i-1,b)<<'*'<<string(k,e)<< '*'<<string(i-1,b)<<endl;
            k+=2;
    }

    cout <<string((input*2)-1,a);
}