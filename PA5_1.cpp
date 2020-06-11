//
//  PA5-1.cpp
//  C++ Program
//
//  Created by Brianna Thompson on 9/28/18.
//  Copyright © 2018 Brianna Thompson. All rights reserved.
//
/* Extend PA 3-4. Write a program that asks the user for two integers.
 Output the sum, difference, product, quotient, and modulus of the two
 integers. Extend the results to demonstrate you can use augmented assignment
  operators (+=, *=, -=, /=) to
increment sum by 1
add 5 to difference
divide the product by 4
subtract 5 from quotient
multiply remainder by 20
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int num1, num2, sum, difference, product, quotient, remainder;
    cout << "Input an integer, then press enter: "; cin >> num1;
    cout << "Input an integer, then press enter: "; cin >> num2;
    //Sum
    sum = num1 + num2;
    cout << "\nThe sum of " << num1 << " and " << num2 << " is " << sum;
    //difference
    difference = num1-num2;
    cout << "\nThe difference of " << num1 << " and " << num2 << " is " << difference;
    //product
    product = num1 * num2;
    cout << "\nThe product of " << num1 << " and " << num2 << " is " << product;
    //quotient
    quotient = num1 / num2;
    cout << "\nThe quotient of " << num1 << " and " << num2 << " is " << quotient;
    //remainder
    remainder = num1 % num2;
    cout << "\nThe remainder when " << num1 << " is divided by " << num2 << " is " << remainder << endl << endl;
    cout << " increment sum; difference+5; product/4; quotient-5; remainder*20; " << endl;
    cout << setw(9) << ++sum << setw(14) << (difference +=5) << setw(12) << (product/=4) << setw(11) << (quotient-=5) << setw(14) << (remainder*=20) << endl << endl;
    return 0;
}
//Brianna Thompson PA 5-1
