//
//  PA3_3.cpp
//  C++ Program
//
//  Created by Brianna Thompson on 9/6/18.
//  Copyright © 2018 Brianna Thompson. All rights reserved.
//
#include <iostream>
using namespace std;
int main()
{
    //Variables
    int TotalMonths, MonthNum;
    //Prompt for Exams
    cout << "Enter the number of months: ";
    cin>>TotalMonths;

    MonthNum = TotalMonths % 12;
    //Output
    cout<<"The Month number is "<<MonthNum<< endl;
    return 0;
    }
