//
//  PA9-4.cpp
//  C++ Program
//
//  Created by Brianna Thompson on 11/9/18.
//  Copyright © 2018 Brianna Thompson. All rights reserved.
/*
It can be shown analytically that the long term probability
of winning the dice game you have programmed in PA 8-3 is .4929293.
Extend that program you wrote to run a large number
of turns and calculate the empirical (experimental) probability.
1,000,000 times through the for loop took about 2 seconds on a computer
 similar to those in the classroom. If yours takes longer than 10 seconds
 there is probably something wrong in your program. It is a good idea to
 run your loop only 100 or so times the first few times through. Hint: cast
  your # of wins and losses as float so you don't run into problems with
  integer division.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <cmath>
#include <cstdlib>

using namespace std;

int main ()
{
    int r1, r2, total, wins, losses, turn, point;

    srand(time(0));
    cout << "How many turns would you like? ";
    cin >> turn;

    wins=0;
    losses=0;
    for (int i = 0; i < turn; i++){
        r1 = rand() %6 + 1;
        r2 = rand() %6 + 1;
        total = (r1 + r2);
        if(total==11||total==point){
            wins++;
        }else losses++;
    }double probability=float(wins)/turn;

    cout<<"No. of wins: "<<wins<<endl;
    cout<<"No. of losses: "<<losses<<endl;
    cout<<"Experimental probability of winning: "<<probability<<endl;
    return 0;
}
//Brianna Thompson
