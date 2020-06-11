//
//  PA9-2.cpp
//  C++ Program
//
//  Created by Brianna Thompson on 11/8/18.
//  Copyright © 2018 Brianna Thompson. All rights reserved.
/*Create a program that allows a user to select the height and width
of a rectangle to build with any character. Limit height and width
values from 3 to 20. Make sure your program checks for illegal entries
and allows a user to keep trying if inputs are out of range. Output just
the perimeter of the rectangle as shown below. Check for illegal inputs.
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    //let's begin
    int height, width;
    char character;
    cout << "Enter desired height (3 to 20): ";
    cin >> height;
    //invalid entry
    //height
    while((height < 3)||(height > 20)){
        cout << "Illegal entry. Please enter height value from 3 to 20: ";
        cin >> height;
    }
    //width
    cout << "Enter desired width (3 to 20): ";
    cin >> width;
    while((width < 3)||(width > 20)){
        cout << "Illegal entry. Please enter width value from 3 to 20: ";
        cin >> width;
    }
    //character
    cout << "What character would you like for the border? ";
    cin >> character;
    //first line/width
    for(int i = 1; i <= width; i++)
        cout << character;
    cout << endl;
    //height/spaces
    for(int i = 1; i<= height - 2; i++){
        cout << character;
        //spaces
        for(int j = 2; j < width; j++)
            cout << " ";
        cout << character << endl;
    }
    //last line
    for(int i = 1; i <= width; i++)
        cout << character;
    cout << endl;
}
//Brianna Thompson
