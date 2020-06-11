//
//  PA3_2.cpp
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
    double Exam1, Exam2, Exam3, WeightedAvg, Exam1W, Exam2W, Exam3W;
    //Prompt for Exams
    cout << "Enter the grade for Exam 1: ";
    cin>>Exam1;
    cout << "Enter the grade for Exam 2: ";
    cin>>Exam2;
    cout << "Enter the grade for Exam 3: ";
    cin>>Exam3;
    //Calculate the weighted average
    Exam1W = Exam1 * 0.30;
    Exam2W = Exam2 * 0.30;
    Exam3W = Exam3 * 0.40;

    WeightedAvg = Exam1W + Exam2W + Exam3W;
    cout << "The weighted average is " << WeightedAvg << endl;
    return 0;
}
//Brianna Thompson PA3.2
