// Sum of Odd and Even Digits



// Write a program to calculate the sum of odd and even digits in a number. The input consists of a single integer 'n' which corresponds to the given number.The output must display the sum of odd numbers and even numbers.




// Input format
// The input consist of a long number

// Output format
// The output prints the sum of odd numbers and sum of even numbers separated by space


#include <iostream>
#include <string>
using namespace std;
int main(){
    int oddCount(0),evenCount(0);
    string input;
    cin >> input;

    for(int i=0;i<input.size();i++){
        if(int(input[i]-'0')%2==0){
            evenCount+=int(input[i]-'0');
        }
        else{
            oddCount +=int(input[i]-'0');

        }

    }
    cout << oddCount << " "<<evenCount<<endl;

}