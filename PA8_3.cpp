//
//  PA8_3.cpp
//  C++ Program
//
//  Created by Brianna Thompson on 10/30/18.
//  Copyright © 2018 Brianna Thompson. All rights reserved.
//
/*
In Assignment PA 7-2 you wrote a program that rolled a pair
of dice. In that program you determined whether the player won,
lost, or was instructed to "roll again" after the first roll of
a pair of dice Extend that program as follows – if the player
 was told to roll again after the first roll (if it was a 4,5,6,8,9,10),
  save that number, call it “the point”. Now continue rolling until
   one of two things happen – 1.  if the player rolls a 7 before
   rolling “the point” number again, the player loses and the
   turn is over; or 2. if the player matches “the point” before
   a 7 is rolled the player wins and the turn is over.  If any
   number besides a 7 or “the point” is rolled nothing happens
   and the player just keeps rolling. Tell the player if they
   won or lost, the results of each roll, and how many rolls it
   took to end that player's turn. You may have to review De
   Morgan's Laws on how to set up "not" (!)  to get your while
   or do-while loop to work correctly! Show the number of rolls
    as shown below.
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

//Declaring
void GameOne();
void roll1();
void otherroll(int point);

int rollcount = 0;
int dice1();

//Original
int main()
{
    GameOne();
    return 0;
}

//MethodOne
void GameOne()
{
    int random = 0;

    time_t t;
    random = (unsigned)time(&t);
    srand(random);
    roll1();
}
//MethodTwo
void roll1()
{
    //declarations
    int sum = 0;
    int point;
    sum = dice1();
    //rolls
    if (sum == 7 || sum == 11) {
        cout << "Yea! You won with a " << sum << " on the first roll." << endl;
    }else if (sum == 2 || sum == 3 || sum == 12) {
        cout << "Sorry, you lost with a " << sum << " on the first roll." << endl;
    }else if (sum == 4 || sum == 5 || sum == 6 || sum == 8 || sum == 9 || sum == 10) {
        point = sum;
        cout << "Roll " << rollcount << ". Your \"point\" is " << sum << endl;
        otherroll(point);
    }
}
//Method3
void otherroll(int point)
{
    int sum = 0;

    while (true) {
        sum = dice1();
        cout << "Roll " << rollcount << ". " << sum << " " << endl;
        if (sum == point) {
            cout << "You won!" << endl;
            break;
        }
        else if (sum == 7) {
            cout << "You lost!" << endl;
            break;
        }
        else
            continue;
    }
}
int dice1()
{
    int sum = 0;
    for (int i = 0; i < 2; i++) {
        sum += rand() % 5 + 1;
    }
    rollcount++;
    return sum;
}
//Brianna Thompson
