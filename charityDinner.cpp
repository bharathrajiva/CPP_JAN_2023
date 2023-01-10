// Charity Dinner

 

// WeCanNGO Trust is organizing a charity dinner at St. John’s College. Since older students are both wiser and richer, the members of the trust decide that the price of each ticket will be based on how many years the students have been in the school. A first year student will buy a PINK ticket, a second year student will buy a GREEN ticket, a third year student will buy a RED ticket, and a fourth year student will buy an ORANGE ticket.



// Assume that all tickets are sold. Each colour of ticket is uniquely priced. Write a program to output all combinations of tickets that produce exactly the desired amount to be raised. The combinations may appear in a specific order. First ORANGE is considered, then RED, then GREEN and finally PINK. Also display the total number of combinations found and the smallest number of tickets to be printed to raise the desired amount so that printing cost is minimized.



// Input format
// First 4 lines of the input correspond to the cost of a PINK, GREEN, RED, ORANGE ticket (in the exact order).

// Last line of the input corresponds to the exact amount of money to be raised by selling tickets

// Output format
// Output all combinations of tickets that produce exactly the desired amount to be raised. The combinations may appear in any order. Output the total number of combinations found. Output the smallest number of tickets to print to raise the desired amount so that printing cost is minimized
// You are using GCC
#include <iostream>
using namespace std;
void printRes(int pink, int green, int red,int orange){
    int p(0),g(0),r(0),o(0),com,count;
    for(int i=0;i<pink;i++){


    }
    cout<<"Total combination is "<<com <<endl;
    cout<<"Minimum Number of tickets to print is "<<count<<endl;
    }
    void print(int p, int g,int r,int o){
    cout<<"# of PINK is "<< p<<" # of GREEN is "<<g<<" # of RED is "<<r<<" # of ORANGE is "<<o<<endl;
    }
int main(){
    int pink,green,red,orange,amount;
    cout<<"Enter the cost of the tickets in the sequence PGRO :"<<endl;
    cin >> pink >>green>> red>> orange;
    cout <<"Enter the amount :";
    cin >> amount;
    printRes(pink ,green,red,orange);
}