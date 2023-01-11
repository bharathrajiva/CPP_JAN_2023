// Peter and Casino

 

// Hotel Royal Gardenia has arranged for an elite business party for the lead industrialists and celebrities of the City. Followed by a dinner buffet, the Event coordinators planned for some casino game events for the high-toned crowd. Peter was a visitor at the party and he takes some number of rubles to the casino with the intention of becoming rich. He plays three machines in turn. Unknown to him, the machines are entirely predictable. Each play costs one ruble. The first machine pays 20 rubles every 25th time it is played; the second machine pays 80 rubles every 120th time it is played; the third pays 8 rubles every 12th time it is played.

// Given the number of rubles with Peter initially (there will be at least one and fewer than 1000), and the number of times each machine has been played since it last paid, write a program that calculates the number of times Peter plays until he goes broke.

// Input format
// First line of the input is an integer that corresponds to the number of rubles with Peter initially.

// Next 3 lines of the input is an integer that corresponds to the number of times each machine has been played since it last paid.

// Output format
// Output a single line that gives the number of times Peter plays until he goes broke
#include<iostream>
using namespace std;
int main()
{
    int m1,m2,m3,ru,t=0;
    cin>>ru;
    cin>>m1;
    cin>>m2;
    cin>>m3;
    while (ru>0)
    {
        if(ru>0){m1++;ru--;t++;}
        if(ru>0){m2++;ru--;t++;}
        if(ru>0){m3++;ru--;t++;}
        if(m1>=25){m1=m1-25;ru=ru+20;}
        if(m2>=120){m2=m2-120;ru=ru+80;}
        if(m3>=12){m3=m3-12;ru=ru+8;}
    }
    cout<<t;
    return 0;
}