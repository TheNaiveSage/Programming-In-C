//
//  PA3.1cpp
//  C++ Program
//
//  Created by Brianna Thompson on 9/6/18.
//  Copyright © 2018 Brianna Thompson. All rights reserved.
// Write a program that asks the user for the temperature in
// Celsius, convert to Fahrenheit and output the results. The
// formula is  F=  9/5 C+32    Hint: Recall peculiarities with
// integer division
//

#include <iostream>
using namespace std;
int main()
{
    //Variables
    double tempC, tempF;
    //Prompt for tempC
    cout << "Enter a degree in Celsius: ";
    cin>>tempC;

    //Calculate tempF
    tempF = ((9.0/5.0) * tempC) + 32;
    cout << "The temperature in Farenheit is " << tempF << endl;
    return 0;
}
//Brianna Thompson PA3.1
