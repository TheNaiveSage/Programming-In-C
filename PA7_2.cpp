//
//  PA7-2.cpp
//  C++ Program
//
//  Created by Brianna Thompson on 10/26/18.
//  Copyright © 2018 Brianna Thompson. All rights reserved.
//
/*
Write a program that rolls a pair of dice. If the sum of the dice
 is 2, 3, or 12, tell the player he/she has lost; if the sum is 7
 or 11, tell the player he/she has won; if it is any other number
 (4,5,6,8,9,10), tell the player that he/she must roll again. To
 make a program pause to wait for user to press Enter, add this line
 of code cin.get();
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
    int dice1, dice2, sum;
    string win, lose;
    srand(time(0));
    dice1 = rand() %6 + 1;
    dice2 = rand() %6 + 1;
    sum = (dice1 + dice2);
    cout << "Press enter to roll."<<endl;
    cin.get();
    cout << "First die is a"<<setw(4)<< dice1;
    cin.get();
    cout << "Second die is a" <<setw(3)<< dice2;
    cin.get();
    cout << "\nYou rolled " << sum <<". ";

    if (sum == 2 && 3 && 12) {
        cout << "You Lose! That turn is over.";
    }
    else if (sum == 7 && 11) {
        cout << "You Win! That turn is over.";
    }
    else   {
        cout<<"Roll again";
    }
    return 0;

}
//Brianna Thompson PA7.2
