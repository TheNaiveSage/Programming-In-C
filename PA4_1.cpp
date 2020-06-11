//
//  PA4.cpp
//  C++ Program
//
//  Created by Brianna Thompson on 9/10/18.
//  Copyright © 2018 Brianna Thompson. All rights reserved.
// Create a program that computes and displays a well formatted
// receipt for customers at the BravesSide Restaurant. Assume a
// sales tax rate of 6.5%.  Use setprecision(2) and appropriate
// fixed and showpoint commands in the program. Make sure decimals
//  line up where appropriate for full credit


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Variables
    double PriceOfMeal, Tax, TaxRate, TotalAmount, Tendered, Change;

    //Currency Setup
    cout << setprecision(2) << fixed << showpoint;

    //Fancy Stuff
    cout << "*** BravesSide Restaurant ***\n" << endl;

    //Prompt for Price of Meal
    cout << "Enter the price of the meal:" << setw(2) << "$";
    cin >> PriceOfMeal;
    cout << "\nPrice of meal: " << setw(2) << "$" << PriceOfMeal;

    //Calculate Sales Tax
    TaxRate = 0.065;
    Tax = PriceOfMeal * TaxRate;
    cout<< "\nSales Tax: " << setw(7) << "$ " << Tax;

    //Fancy Stuff 2.0
    cout << "\n----------------------";

    //Calculate Total Amount
    TotalAmount = Tax + PriceOfMeal;
    cout << "\nTotal Amount: " << setw(3) << "$" << TotalAmount << endl;

    //Calculate Amount Tendered
    cout << "\nEnter amount tendered: $";
    cin >> Tendered;
    cout << "\nAmount Tendered: $" << Tendered;

    //Fancy Stuff 3.0
    cout << "\nTotal Amount: " << setw(4) << "$" << TotalAmount;
    cout << "\n----------------------";

    //Calculate Change
    Change = Tendered - TotalAmount;
    cout << "\nChange:" << setw(11) << "$" << Change << endl;

    //Fancy Stuff 4.0
    cout << "\n*** Thank You ***"<< endl;
    return 0;
}
//PA 4-1 Brianna Thompson
