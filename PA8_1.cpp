//
//  PA8_1.cpp
//  C++ Program
//
//  Created by Brianna Thompson on 10/30/18.
//  Copyright © 2018 Brianna Thompson. All rights reserved.
//
/*
Extend the pay program from Module 7 (PA 7-1) with while or
do-while loop that asks the user if they want to continue.
    Allow both upper and lower case responses. When the processing
     of employees concludes, show the Total Number of Employees
     Processed, Total Gross Pay, Total Tax, and Total Net Pay
     (gross pay – taxes). Process at least 3 employees.
*/

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    char continue_loop = 'Y';
    srand(time(0));
do{
    //Beginning
    double payrate,hours;
    char A = 0, a=0, b=0, B = 0, J = 0, Y = 0, scode=0, ecode=0;
    cout<<"This program calculates the net pay for each employee."<<endl;
    cout<<"\nAt each prompt, enter the requested data."<<endl;
    cout<<"Enter the pay rate: ";
    cin>>payrate;
    cout<<"Enter the number of hours worked: ";
    cin>>hours;
    cout<<"Enter the employee code (A or B): ";
    cin>>ecode;
    cout<<"Enter the state code (Y or J): ";
    cin>>scode;

    //Solving
    double regular = 0.0, overtime = 0.0, gross=0.0, tax=0.0, net=0.0, taxrate=0.0;
    //pay
    if (hours<=40){
        regular=hours*payrate;
        overtime=0;
    }if (hours>40){
        regular=(40*payrate);
        overtime=((hours-40)*(1.5*payrate));
    }
    //gross
    gross=(regular+overtime);
    //tax
    if((ecode='A')||(ecode='a')){
        if((scode=='Y')||(scode=='y')){
            taxrate=0.07;
            tax=(taxrate*gross);
        }else if((scode=='J')||(scode=='j')){
            taxrate=0.045;
            tax=(taxrate*gross);
        }
    }else if((ecode='B')||(ecode='b')){
        taxrate=0;
        tax=0;
    }
    //net
    net=(gross-tax);
    //End
    cout<<endl<<"\nRegular Pay: "<<setw(3)<<"$"<<setprecision(2)<<fixed<<regular;
    cout<<"\nOvertime Pay: "<<setw(2)<<"$"<<overtime;
    cout<<"\nGross Pay: "<<setw(5)<<"$"<<gross;
    cout<<"\nTax: "<<setw(11)<<" $"<<tax;
    cout<<"\n---------------------"<<endl;
    cout<<"Net Pay: "<<setw(7)<<"$"<<net<<endl<<endl;

    cout<<"Do you want to process another employee? ";
    cin>>continue_loop;
    cout<<endl;

}while((continue_loop=='Y')||(continue_loop=='y'));
    return 0;
}
