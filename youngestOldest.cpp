// Youngest and Oldest

// The Pan Am 73 flight from Bombay to New York en route Karachi and Frankfurt was hijacked by a few Palestinian terrorists at the Karachi International Airport.









// The senior flight purser Neerja Banhot had to wither her fear and start evacuating the passengers on board. She pleaded the hijackers to release the oldest and the youngest person in the aircraft. Heeding to her plea the chief of the hijacker agreed to let go the oldest and the youngest. Given the ages of the passengers find the oldest and the youngest.

                                 

// Input format
// The input consists of n+1 lines.

// The first line of input consists of an integer n, corresponding to the number of passengers in the aircraft.

// The next n lines of input consist of n integers that correspond to the age of the passengers.



// Output format
// The output consists of 2 integers corresponding to the oldest and the youngest.

// Print Invalid Input and terminate the process of getting inputs if n or any of the ages is not a non zero positive number
#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    int inputsize;
    cin >> inputsize;
    int* arr= new int[inputsize];
    for(int i = 0;i<inputsize;i++){
        cin >> arr[i];
    }
    cout << *max_element(arr,arr+inputsize) <<" "<<*min_element(arr,arr+inputsize);

}