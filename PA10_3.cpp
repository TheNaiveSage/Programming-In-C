//
//  PA10-3.cpp
//  C++ Program
//
//  Created by Brianna Thompson on 11/14/18.
//  Copyright © 2018 Brianna Thompson. All rights reserved.
//Modify the program you just wrote to have the program sum
//the cells around the specified cell. Show results that include
// Row and/or Column 1 or 9. Hint: Initialize an 11 x 11 array with
//0's to take into account the values around the borders. Then put your
// 9x9 array in rows and columns in array[1][1] to array[9][9]
//

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

    int sum=0,thing1,thing2;
    //Calculating the sum of the surrounding elements
    thing1=row-2;
    thing2=column-1;
    if(thing2<9 && thing1<9){
        sum+=matrix[row-2][column-1];
    }
    thing1=row;
    thing2=column-1;
    if(thing2<9 && thing1<9){
        sum+=matrix[row][column-1];
    }
    thing1=row-2;
    thing2=column;
    if(thing2<9 && thing1<9){
        sum+=matrix[row-2][column];
    }
    thing1=row-2;
    thing2=column-2;
    if(thing2 < 9 && thing1 < 9 ){
        sum+=matrix[row-2][column-2];
    }
    thing1=row-1;
    thing2=column-2;
    if(thing2<9 && thing1<9){
        sum+=matrix[row-1][column-2];
    }
    thing1=row-1;
    thing2=column;
    if(thing2<9 && thing1<9){
        sum+=matrix[row-1][column];
    }
    thing1=row;
    thing2=column;
    if(thing2<9 && thing1<9){
        sum+=matrix[row][column];
    }thing1=row;
    thing2=column-2;
    if(thing2 < 9 && thing1 < 9 ){
        sum+=matrix[row][column-2];
    }
    cout<<"\nThe sum of the cells surrounding cell "<<row<<","<<column<<" is "<<sum<<endl;

    return 0;
}
//Brianna Thompson PA10-3




