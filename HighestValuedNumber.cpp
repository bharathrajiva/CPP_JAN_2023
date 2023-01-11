// Highest Valued Number

// Nurikabe logical game (sometimes called Islands in the Stream) is a binary determination puzzle. The puzzle is played on a typically rectangular grid of cells, some of which contain numbers. You must decide for each cell if it is white or black (by clicking on them) according to the following rules:

// • All of the black cells must be connected.

// • Each numbered cell must be part of a white island of connected white cells.

// • Each island must have the same number of white cells as the number it contains (including the numbered cell).

// • Two islands may not be connected.

// • There cannot be any 2x2 blocks of black cells.

// Unnumbered cells start out grey and cycle through white and black when clicked. Initially numbered cells are white in color.

// Problem Statement:

// Write a program to find the highest valued number in the numbered cells, given a valid initial board configuration. Below figure is the sample valid initial configuration

// .



// Input format
// First line of the input is an integer N that gives the number of rows and columns of the grid.

// Next N lines will have a valid initial board configuration with N*N cells. Assume that the maximum number in a cell can be 10. Grey colored cells are represented by the integer 20 in the matrix representation of the input configuration.


#include<iostream>
using namespace std;
int main(){
    int inputsize(0),val(0);
    cin >> inputsize;
    int arr[30][30];
    for(int i =0;i<inputsize;i++){
        for(int j =0;j<inputsize;j++){
            cin >> arr[i][j];

        }
    }
    for(int i=0;i<inputsize;i++)
{
    for(int j=0;j<inputsize;j++){
        if (arr[i][j] >=val && arr[i][j] !=20){
            val=arr[i][j];
        }

    }

}
std::cout<<val;
return 0;
}
