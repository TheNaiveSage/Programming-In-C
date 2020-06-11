//
//  PA 5-2.cpp
//  C++ Program
//
//  Created by Brianna Thompson on 9/28/18.
//  Copyright © 2018 Brianna Thompson. All rights reserved.
//
/* Generate a random lower case letter, display it on the console,
convert it to uppercase and display it. Display all DEC values associated
with the ASCII character generated.*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{

    srand(time(0));
    //generate random number 97-122
    int randnum = (rand() % 26);
    //random number to upper
    char uppercasechar = 'A' + randnum;
    //upper to num
    int upperdec = 'A' + randnum;
    //upper to lower
    char lowercasechar = 'a' + randnum;
    //lower to num
    int lowerdec = 'a' + randnum;


    cout << "The random letter, lowercase, is " << lowercasechar << endl;
    cout << "The DEC value for the lowecase random number is " << lowerdec << endl;
    cout << "The random letter, uppercase, is " << uppercasechar << endl;
    cout << "The dec value for the upper case random letter is " << upperdec << endl;

    return 0;
}
//Brianna Thompson 5-2
