//
//  PA5-3.cpp
//  C++ Program
//
//  Created by Brianna Thompson on 10/5/18.
//  Copyright © 2018 Brianna Thompson. All rights reserved.
//
/*Write a program that the sums DEC values for the ASCII
characters in string "UNCP"? Hint: use either String_Name[index #]
or String_Name.at(index #) to get individual characters in the string.
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    a = "UNCP";
    int addChar = a[0] + a[1] + a[2] + a[3];

    cout<< "The total DEC values in string 'UNCP' is " << addChar;
    cout << endl;
}
//Brianna Thompson
