//
//  PA6-3.cpp
//  C++ Program
//
//  Created by Brianna Thompson on 10/18/18.
//  Copyright © 2018 Brianna Thompson. All rights reserved.
/* Modify and extend the real estate program in Module 6
Sample Programs.docx to use a switch statement instead of
if-else. The switch statement should include the shortcut
technique so that lower case r, m, and c, do not give
 “Improper Property Code” message. Then determine and
 calculate the commission percentage on a real estate sale
 depending on the property. Use output manipulators to provide
  the correct number of decimal places and setw to align decimal
   points in the outputs. Use these value to calculate the
   commission for various property types.
residential_rate = 0.060;
multidwelling_rate = 0.050;
commercial_rate = 0.045;

*/


#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double value, c_rate, m_rate, r_rate, commission;
    cout<<"Enter the property's selling price: \n";
    cin>>value;
    r_rate = 0.060;
    m_rate = 0.050;
    c_rate = 0.045;

    char propertycode;
    cout<<"\nEnter the property code according to the following: "<<endl;
    cout<<"\nSingle Family Residential, enter R"
    << "\nMultiple Unit Residential, enter M"
    << "\nCommercial, enter C"<<endl;
    cout<< "\nPlease make your selection: ";
    cin>>propertycode;

    //Change lower to upper
    if (islower(propertycode)){
       propertycode=static_cast<char>(toupper(propertycode));
    }
    //Switch
    switch(propertycode)
    {
        case'R':
            cout<<"\nFor thise Single Family Residential.\n";
            commission = r_rate*value;
            break;
        case 'M':
            cout<<"\nFor this Multiple Unit Type Residential.\n";
            commission = m_rate*value;
            break;
        case 'C':
            cout<<"\nFor this Commercial property.\n";
            commission = c_rate*value;
            break;
        default: cout<<"Invalid Property Input! Try again\n";
            commission = 0;
    }
    //more output
    cout<<setw(3)<<"The value of this property is "<<setw(6)<<value<< "   and "<<endl
    <<setw(3)<<"The commission is "<<setw(19)<<commission;
}
//Brianna Thompson
