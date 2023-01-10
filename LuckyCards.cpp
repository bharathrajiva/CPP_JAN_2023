// Lucky Cards

 

// The Hatfield Game Fair is the premier event of its kind for adults interested in some intellectual and cognitive brain games. Exciting games were organized for kids between age group of 8 and 10. One such game was the "Lucky Cards", a simple two-player game, played with a deck of cards. The cards in the deck have these possible names: two, three, four, five, six, seven, eight, nine, ten, jack, queen, king, ace. The cards labeled jack, queen, king, ace are collectively known as high cards.

// The numerical equivalent of the high cards is as given below:

// Jack – 11

// Queen – 12

// King – 13

// Ace - 1

// Please note here, though Ace has a numerical equivalent value as 1, it is always considered as the top rated card. So it is also included in the list of high cards.

 

// The game organizer selects N cards and places it in the deck faced-down on the table. Player A turns over the top card and places it on a pile; then player B turns over the top card and places it on the same pile. A and B alternate turns until the N cards are exhausted. The game is scored as follows:

// • if a player turns over an ace that is 1, with at least 4 cards remain to be turned over, and none of the next 4 cards is a high card, that player scores 4 points

// • if a player turns over a king that is 13, with at least 3 cards remain to be turned over, and none of the next 3 cards is a high card, that player scores 3 points

// • if a player turns over a queen that is 12, with at least 2 cards remain to be turned over, and none of the next 2 cards is a high card, that player scores 2 points

// • if a player turns over a jack that is 11, with at least 1 card remains to be turned over, and the next card is not a high card, that player scores 1 point

// Write a program to calculate the scores of the two players.



// Input format
// The first line of the input contain an integer N, which corresponds to the number of cards in the deck.

// Each of the following N lines will contain an integer that corresponds to the numerical value of the cards that the players turn over. The first line denotes the first card to be turned over; the next line the next card; and so on.



// Output format
// Print the individual scores of the players whenever a player scores in separate new lines.

// Print the total score for each player in the last two lines of the output at the end of the game
#include <iostream>
using namespace std;
int main(){
    int input,ascore(0),bscore(0);
    cin >>input;
    int* arr = new int[input];
    for(int i =0;i<input;i++){
        cin >> arr[i];}
    for(int i=0;i<input;i++){
        if(i%2!=0){
        if(arr[i]==1 && arr[i+1]<=11 && arr[i+2]<=11 && arr[i+3]<=11 && arr[i+4]<=11){
            cout<<"Player A scores4point(s)"<<endl;
            ascore+=4;

        }
        else if(arr[i]==11 && arr[i+1]<=11 && arr[i+1]!=1 ){
            cout<<"Player A scores1point(s)"<<endl;
            ascore+=1;
        }else if(arr[i]==12 && arr[i+1]<=11 && arr[i+2]<=11  && arr[i+1]!=1 && arr[i+2]!=1 ){
            cout<<"Player A scores2point(s)"<<endl;
            ascore+=2;
        }else if(arr[i]==13 && arr[i+1]<=11 && arr[i+2]<=11 && arr[i+3]<=11 && arr[i+1]!=1 && arr[i+2]!=1 && arr[i+3]!=1 ){
            cout<<"Player A scores3point(s)"<<endl;
            ascore+=3;
        }
        }
        else{
            if(arr[i]==1 && arr[i+1]<=11 && arr[i+2]<=11 && arr[i+3]<=11 && arr[i+4]<=11){
            cout<<"Player A scores4point(s)"<<endl;
            ascore+=4;

        }
        else if(arr[i]==11 && arr[i+1]<=11 && arr[i+1]!=1 ){
            cout<<"Player A scores1point(s)"<<endl;
            ascore+=1;
        }else if(arr[i]==12 && arr[i+1]<=11 && arr[i+2]<=11  && arr[i+1]!=1 && arr[i+2]!=1 ){
            cout<<"Player A scores2point(s)"<<endl;
            ascore+=2;
        }else if(arr[i]==13 && arr[i+1]<=11 && arr[i+2]<=11 && arr[i+3]<=11 && arr[i+1]!=1 && arr[i+2]!=1 && arr[i+3]!=1 ){
            cout<<"Player A scores3point(s)"<<endl;
            ascore+=3;
        }

        }

        }
        
        cout << "Player A:"<<ascore<<"point(s)"<<endl;
        cout<<"Player B:"<<bscore<<"point(s)"<<endl;
        }
