// Connect the Ropes



// It was Christmas Eve and the celebrations remembering the birth of Jesus were going on in full swing at the Catheral Chapel. The Event Management Team had arranged for some exciting games after the mass worship and feast, where adults and kids of all ages participated very actively. "Connect the Ropes" was organized for the kids where each kid will be given N ropes and the goal of the game is that the kids has to connect all of the ropes with each other to get one rope. When kids connect 2 ropes with each other they lose 'k' units from each rope.

// You have to find what the length of the resulting final rope is. For example if a kid gets 3 ropes of lengths 3, 4 and 6 and k=1. He can connect 3 and 4 to get a rope of length 5, he then can connect the ropes of length 5 and 6 to get the final rope of length 9.

//  The kids will keep selecting any pair of ropes and will connect them together until there is only 1 rope left. Which ropes to connect first and which order doesn't really matter, at the end the resulting rope will be the same length regardless his decisions. Write a program to find the length of the resulting final rope.



  

// Input format
// First line of the input is an integer contains two space-separated integers N (1 <= N <= 100) representing the number of ropes and an integer 'k'.

// Second line of the input contains N integers separated by a single space, representing the ropes' lengths. Each rope length will not be less than 2 and will not be greater than 100.
#include<iostream>
using namespace std;
int main()
{
    int n,k,i,j=0;
    cin>>n>>k;
    int*  a = new int[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        a[i]=a[i]-k;
    }
    for(i=0;i<n;i++)
    {
        j=j+a[i]-k;
    }
    j=j+k+k;
    cout<<j;
    return 0;
}
