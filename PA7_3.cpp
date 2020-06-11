//
//  PA7-3.cpp
//  C++ Program
//
//  Created by Brianna Thompson on 10/26/18.
//  Copyright © 2018 Brianna Thompson. All rights reserved.
//
/*
Roll a pair of dice. Using &&, ||, and ! operators as necessary,
determine which of the following is true and display results for
at least 4 different outcomes.
Both dice are 1's.
Both dice are 6's.
One die is a 1, the other a 6, Specify die is which.
One die is a 1, the other is not a 6. Specify which die is the 1.
One die is a 6, the other is not a 1. Specify which die is the 6.
Neither die have a 1 or a 6.
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    //int dice1 = 2; //took out the random possibility by having the numbers
    //int dice2 = 2;
    int D1=rand()%6+1;
    int D2=rand()%6+1;

    cout<<"First Dice =  "<<D1<<endl;
    cout<<"Second Dice = "<<D2<<endl;

    if(D1==1 && D2==1)
        cout<<"Both D1 & D2 = 1\n";
    else
        if(D1==6 && D2==6)
            cout<<"Both D1 & D2 = 6\n";
        else
            if((D1==1 && D2==6) || (D1==6 && D2==1))
                cout<<"D1 = "<< D1 <<" and D2 = "<< D2<<endl;
            else
                if(D1==1 && (D2!=1 || D2!=6))
                    cout<<"D1 = 1 and D2 != 6\n";
                else
                    if(D1==6 &&(D2!=1 || D2!=6))
                        cout<<"D1 = 6 and D2 !=1\n";
                    else
                        if(D2==1 &&(D1!=1 ||D1!=6))
                            cout<<"D1 != 1 and D2 = 6\n";
                        else
                            if(D2==6 &&(D1!=1 || D1!=6))
                                cout<<"D1 != 6 and D2 = 6\n";
                            else
                                if(D1!=1 && D2!=1 && D1!=6 && D2!=6)
                                    cout<<"Neither die is a 1 nor a 6.\n";
    return 0;
}
