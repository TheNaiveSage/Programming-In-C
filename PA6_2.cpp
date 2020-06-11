//
//  PA6-2.cpp
//  C++ Program
//
//  Created by Brianna Thompson on 10/18/18.
//  Copyright © 2018 Brianna Thompson. All rights reserved.
// Ask the user for a positive integer. Output whether the
// integer is odd or even. Tell the user if the value input
// was not a positive integer

#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int input;
    cout<<"Input a positive integer: ";
    cin>>input;

    if(input%2==0){
        cout<<"The integer is even";
        if(input<0){
            cout<<", but negative.";
        }else if(input>0){
            cout<<" and positive.";
        }
    }else{
        cout<<"The integer is odd";
        if(input<0){
            cout<<", and negative."<<endl;
        }
    }
}
//Brianna Thompson
