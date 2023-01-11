// Math challenge

// In connection to the National Mathematics Day celebration, the Regional Mathematical Scholars Society had arranged for a Math Challenge Event where high school students participated in large number. First level of the challenge was oral quiz, followed by a written test in the second round.

// In the second round, the problem that the students had to answer goes like this:

// For every positive number ‘n’ we define a function streak(n)=k as the smallest positive integer k such that n+k is not divisible by k+1.

//  E.g:

// 13 is divisible by 1

// 14 is divisible by 2

// 15 is divisible by 3

// 16 is divisible by 4

// 17 is NOT divisible by 5

// So streak(13)=4.

// Now, define P(s,N) to be the number of integers n, 1<n<N, for which streak(n)=s. Write a program to get the input as 's' and 'N' and find the count of integers until N which has the streak value as 's'.



// Input format
// First line of the input is an integer ‘s’ which is the streak value of an integer n.

// Second line of the input is an integer ‘N’ which is the upper limit of numbers until which P(s,N) is calculated.



// Output format
// Output is an integer that gives the count of integers until ‘N’ which has the streak value as ‘s’.

// Sample testcases
#include <iostream>
using namespace std;
int  streak(int N){
    int s(1);
    for(int i=N;i<N+8;i++){
        if(N%s==0){
            s+=1;

        }
        
    }
    return s-1;
}
int main()
{   
    int s;
    int N,count(0);
    cin >>s>>N;
    for(int i =1;i<N;i++){
        if(s==streak(i)){
            count+=1;
        }
    }
    cout << count;
    
} 