//
//  PA11-2.cpp
//  C++ Program
//
//  Created by Brianna Thompson on 11/25/18.
//  Copyright © 2018 Brianna Thompson. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;
int find(string numolett, int m, string pair){
    for(int i=0; i<=(m-2); i++){
        if(numolett[i]==pair[0]){
            if(numolett[i+1]==pair[1])
                return i+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"How many letters do you want in your string? ";
    cin>>n;
    char numolett[n];

    //build array of letters
    for(int i=0; i<n; i++){
        numolett[i]=((rand()%('z'-'a'+1))+97);
    }
    //print out letters
    for(int i=0; i<n; i++)
        cout<<numolett[i];
    cout<<endl;
    //pair
    char pair[2];
    cout<<endl<<"What letter pair would you like to find? ";
    cin>>pair;
    //if-else
    int search=find(numolett,n,pair);
    if(search!=-1)
        cout<<"The pair is in the string starting at character number "<<search<<" in the string."<<endl;
    else
        cout<<"The letter pair \""<<pair<<"\" is not in the string."<<endl;
}
//Brianna Thompson PA 11-2
