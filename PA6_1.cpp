//
//  PA6.cpp
//  C++ Program
//
//  Created by Brianna Thompson on 10/18/18.
//  Copyright © 2018 Brianna Thompson. All rights reserved.
// Ask the user to enter the coordinates of a point (x,y) and
//  check whether that point is inside a circle centered at
// (0,0) with radius 10.

#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, y, distance;
    //input
    cout << "Enter a point with two coordinates: ";
    cin >> x >> y;
    //distance
    distance = sqrt((pow(x,2))+(pow(y,2)));
    cout << "Point (" << x << ", " << y <<")";
    //if statement
    if(distance <= 10)
        cout << " is within the circle.";
    else if(distance > 10)
        cout << " is not within the circle.";
    cout <<endl;
    return 0;
}
//Brianna Thompson
