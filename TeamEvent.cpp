// Team Event

 

// Super Quiz Bee is a famous quiz Competition that tests students on a wide variety of academic subjects. This week’s competition was a Team event and students who register for the event will be given a unique registration code N. The participants are teamed into 10 teams and the team to which a participant is assigned to depends on the absolute difference between the first and last digit in the registration code.

 

// The event organizers wanted your help in writing an automated program that will ease their job of assigning teams to the participants. If the registration number given is less than 10, then the program should display "Invalid Input".

// Input format
// The only line of input contains an integer N.
#include <iostream>
using namespace std;
void method2(int n){
    int end = n%10;
    int start = n%100;
    cout << end << start<<endl;

}
int main(){
    string input;
    cin >> input;
    char end= input[input.size()-1];
    char start = input[0];
    int out = abs(int(end-'0')-int(start-'0'));
    cout << out << endl;
    method2(100);


}
