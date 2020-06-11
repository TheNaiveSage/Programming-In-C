//
//  PA 9-3.cpp
//  C++ Program
//
//  Created by Brianna Thompson on 11/9/18.
//  Copyright © 2018 Brianna Thompson. All rights reserved.
/*Output a diamond composed of asterisks. Have the user specify
the width with max (21) and min (3) allowable. Even numbers inputs
 are not allowed. This is pretty tricky. If you can do this, you
  have a good knowledge of for loops. If the user makes an illegal
  entry (out of range or an even number, tell them and allow them
          to keep trying until they get it right.  Hint: Use two
          nested for loops – one for top half, another for bottom.
          Inside of each use two for loops – the first for spaces,
           the second for the *'s. The number of space and *'s depends
            on what row you are on. Some of the Sample Programs should help.
*/

#include <iostream>
using namespace std;
int main()
{
    int y=1,x,number,option=0, rows, space;
    do{
        if(option ==1)
            cout<<"Width is out of range. Please try again!"<<endl;
        if(option==2)
            cout<<"You need to enter an odd value."<<endl;

            cout <<"What is the width of your diamond? (3 to 21, odd values only): ";
                cin >> rows;

        if(rows%2==0){
            option=2;
        }else{
            option=1;
        }
    }while(rows<3||rows>21||rows%2==0);
            //top
            for(int i = 1, k = 0; i <= rows; ++i, k = 0){
                for(space = 1; space <= rows-i; ++space){
                    cout <<"  ";
                }while(k != 2*i-1){
                    cout << "* ";
                    ++k;
                }cout << endl;
            }
            //bottom
            for(int i = rows-1; i >= 1; --i){
                for(int space = 0; space < rows-i; ++space)
                    cout << "  ";
                for(int j = i; j <= 2*i-1; ++j)
                    cout << "* ";
                for(int j = 0; j < i-1; ++j)
                    cout << "* ";
                cout << endl;
            }
}
//Brianna Thompson
