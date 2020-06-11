//
//  PA4-2.cpp
//  C++ Program
//
//  Created by Brianna Thompson on 9/10/18.
//  Copyright © 2018 Brianna Thompson. All rights reserved.
// Write program to generate and display a random number
// between 1 and X, a value chosen by the user.

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    //Declare X
    int X, XRandom;
    cout << "What range would you like for your random numbers? (1 through X)." << endl;
    cout << "Enter an integer value for X:"; cin >> X;
    //Display Random Number between 1 and X
    srand(time(0));
    XRandom = rand()%X+1;
    cout << "Your Random Number is " << XRandom << endl <<endl;
    return 0;
}
//Brianna Thompson PA4-2
