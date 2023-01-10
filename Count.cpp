// Count

 

// Mars Spell Bee is the largest self-motivated spelling competition held for school children. The children from different schools who are participating in the competition will be given a registration code. The registration is on a first come first serve basis to a maximum of N entries.

 

// The competition is conducted in two different galleries of the venue. Just for the ease of their management, the Event organizers have announced to divide the children into two groups, to attend the competition in the two chosen galleries. By that note, all those children who have their registration code as an even number will be put in one gallery and those with odd number will be in another gallery.

// Help the organizers to find count of number of even registration codes and odd registration codes from the total N.



// Input format
// The first line of input consists of a single integer N denoting the number of registration codes issued for the competition.

// The second line of input consists of N space separated integers, denoting the registration codes of each child



// Output format
// Output a single with the count of even numbers and odd numbers from N, separated by a single space
#include <iostream>
using namespace std;
int main(){
    int n,evencount(0),oddcount(0);
    cin >> n;
    int* arr = new  int[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
        if(arr[i]%2==0){
            evencount+=1;
        }
        else
        oddcount+=1;
    }
    cout << evencount<<" "<<oddcount<<endl;

}