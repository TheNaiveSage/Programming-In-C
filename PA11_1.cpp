//
//  PA11-1.cpp
//  C++ Program
//
//  Created by Brianna Thompson on 11/25/18.
//  Copyright � 2018 Brianna Thompson. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string first, middle, last;
    //full name
    cout<<"Enter a full name (first, middle, then last): ";
    cin>>first>>middle>>last;
    cout<<endl<<first<<endl<<middle<<endl<<last<<endl;
    //initials
    first=first[0];
    middle=middle[0];
    last=last[0];
    cout<<first<<middle<<last<<endl;
}
//Brianna Thompson PA 11-1
