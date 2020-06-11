//
//  PA7-1.cpp
//  C++ Program
//
//  Created by Brianna Thompson on 10/25/18.
//  Copyright © 2018 Brianna Thompson. All rights reserved.
//
/*
Write a program to process a payroll for a small company.
Calculate gross pay including the possibility of overtime.
Calculate payroll tax depending on the employee code and state code.
 Demonstrate you can use && and/or || for this program.
•	Overtime is paid at the rate of 150% of hourly wages for every hour over 40.
•	Employees with Code B pay no taxes.
•	For Code A employee's, If an employee's  State Code is Y they pay  7%; with State Code J pay only 4.5% taxes.
•	Assume the user does not make any error when inputting data.
•	Display the gross salary, tax, and net salary for each employee.
•	Format the output "professionally" – lined up decimals, etc as shown below.

*/

#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //Beginning
    double payrate,hours;
    char A = '\0',B = '\0', J = '\0', Y = '\0', scode=0, ecode=0;
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
    double regular = 0.0,overtime = 0.0,gross,tax,net,taxrate;
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
        if((ecode='A')){
            if(scode=='Y'){
                taxrate=0.07;
                tax=(taxrate*gross);
            }if(scode=='J'){
                taxrate=0.045;
                tax=(taxrate*gross);
            }
        }if((ecode='B')){
            taxrate=0;
            tax=(taxrate*gross);
        }
    //net
    net=(gross-tax);
    //End
    cout<<endl<<"\nRegular Pay: "<<setw(3)<<"$"<<setprecision(2)<<fixed<<regular;
    cout<<"\nOvertime Pay: "<<setw(2)<<"$"<<overtime;
    cout<<"\nGross Pay: "<<setw(5)<<"$"<<gross;
    cout<<"\nTax: "<<setw(11)<<" $"<<tax;
    cout<<"\n---------------------"<<endl;
    cout<<"Net Pay: "<<setw(7)<<"$"<<net;
}
