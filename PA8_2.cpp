//
//  PA8_2.cpp
//  C++ Program
//
//  Created by Brianna Thompson on 10/30/18.
//  Copyright © 2018 Brianna Thompson. All rights reserved.
//
/*
In mathematics the greatest common divisor (gcd) of two or more
integers, which are not all zero, is the largest positive integer
that divides each of the integers evenly. For example, the gcd of
8 and 12 is 4. For this assignment write a program that has the user
enter two integers, then displays the GCD of those numbers. Include
either a while or do-while loop
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter first integer: ";
    cin>>a;
    cout<<"Enter second integer: ";
    cin>>b;

    while(a!=b)
    {
        if(a > b)
            a -= b;
        else
            b -= a;
    }
          cout << "GCD = " << a;
          return 0;
}
//Brianna Thompson
