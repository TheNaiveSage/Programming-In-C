//
//  PA90-1.cpp
//  C++ Program
//
//  Created by Brianna Thompson on 11/13/18.
//  Copyright © 2018 Brianna Thompson. All rights reserved.
//Fill a 20x20 two-dimensional array with random numbers, 0 through 9.
//Don’t use <ctime> or srand in your program. Print out the array.
//Sum the values in both diagonals
//(upper left to lower right and upper right to lower left)
#include<iostream>
using namespace std;
int main() {

    int m[20][20];
    int column, row, UL = 0, UR = 0, twenty;
    twenty=20;

    for(row=0;row<twenty;row++){
        for(column=0;column<twenty;column++){
            m[row][column]={rand()%10};
            cout<<m[row][column]<<" ";
            }
        cout<<endl;
    }
    for(row=0;row<twenty;++row)
        for(column=0;column<twenty;++column)
        {
            if(row==column)
                UL+=m[row][column];
            if(row+column==(twenty-1))
                UR+=m[row][column];
        }
    cout<<"The sum of the numbers in the UL -> LR diagonal is "<<UL<<endl;
    cout<<"The sum of the numbers in the UR -> RL diagonal is "<<UR<<endl;
}
//Brianna Thompson 10-1
