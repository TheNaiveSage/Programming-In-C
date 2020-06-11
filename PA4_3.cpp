//
//  PA4-3.cpp
//  C++ Program
//
//  Created by Brianna Thompson on 9/13/18.
//  Copyright © 2018 Brianna Thompson. All rights reserved.
// The equation for a Pear-Shaped Curve
// Write a program that solves for y when a = 1.0, b = 2.0,
// and x = 0.6. Show answer to 7 decimal places

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    float a, b, x, y, numerator, denominator;
    cout <<"\nWhat is the value of a, b, and x? "; cin >> a; cin>> b; cin >> x;
    //Formula
    numerator = (pow(x,3.0))*(a-x);
    denominator = 1.0+(pow(b,2));
    y = sqrt(numerator/denominator);
    cout<<setprecision(7)<<showpoint<<fixed;
    cout<<"\ny = "<<y<<endl<<endl;
    return 0;
}
//Brianna Thompson PA4-3
