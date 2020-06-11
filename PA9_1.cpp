//
//  PA9-1.cpp
//  C++ Program
//
//  Created by Brianna Thompson on 11/8/18.
//  Copyright © 2018 Brianna Thompson. All rights reserved.
/* Create an 8x8 grid like the one below. Tab in to start each row.
Each cell is one row tall and three spaces wide.  Dash (-) characters
(33) were used to construct the horizontal lines.
Using the rand function fill in all the cells in the grid with random
digits 0-9. For full credit, center the digits in cells.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{

    //Define
    srand(time(0));
    int column, row, dash;
    int size=8;
//table
    //first line of dahses
    cout<<'\n'<<'\t';
    for(dash=0; dash<33;dash++)
        cout<<"-";
    cout<<endl;
        //rows
    for(row=0; row<size; row++)
    {
        //remaining numbers
            //first column
            cout<<'\t'<<"|";
        for(column=0;column<size;column++)
        {
            //numbers
            cout<<" "<<rand()%10<<" |";
        }
        //remaining rows
        cout<<endl<<'\t';
        for(dash=0;dash<33;dash++)
            cout<<"-";
        cout<<endl;
    }
    return 0;
}
//Brianna Thompson PA9-1



//For Loops are the bane of my existence.
