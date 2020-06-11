//
//  PA10-2.cpp
//  C++ Program
//
//  Created by Brianna Thompson on 11/14/18.
//  Copyright © 2018 Brianna Thompson. All rights reserved.
//Write a program to fill a 9x9 two dimensional array with random numbers (0-9).
//Label Columns and Rows 1-9 as shown below. Print out the array.
//Then ask the user to specify a Row-Column value and print out its contents.
//Since array indices start at 0, the difficulty here is identifying the correct value in the array.
//In the below example the number 6 is in the array at [5][2] to take the 0 indexing into consideration.

#include<iostream>
#include<time.h>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main(){

    int matrix[9][9];
    for (int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            matrix[i][j]={rand()%10};
        }
    }
    cout<<setw(26)<<"Columns";
    cout<<endl<<"\t\t";
    for(int j=0;j<9;j++)
    {
        cout<<j+1<<"\t";
    }
    cout<<endl<<endl;
    for(int i=0;i<9;i++){
    cout<<"Row "<<i+1<<"\t";
        for(int j=0;j<9;j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl<<"What array cell you would like to see? (Please enter after each entry)"<<endl;
    int row,column;
    cout<<"Row = ";
    cin>>row;
    cout<<"Column = ";
    cin>>column;
    cout<<endl<<"The number "<<matrix[row-1][column-1]<<" is in the cell "<<row<<", "<<column<<endl;
    return 0;
}
