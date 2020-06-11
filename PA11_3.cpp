//
//  PA11-3.cpp
//  C++ Program
//
//  Created by Brianna Thompson on 11/25/18.
//  Copyright © 2018 Brianna Thompson. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
    int n;
    cout<<"How many letters would you like in your array? ";
    cin>>n;
    char numolett[n+1];
    //build array of letters
    for(int i=0; i<n; i++){
        int ch=(char)((rand()%('z'-'a'+1))+97);
        numolett[i]=ch;
    }
    int count[26];
    for (int i=0; i<26; i++)
        count[i]=0;
    //alphabet
    for(int i=0; i<n; i++){
        int alphabet = (int)numolett[i];
        int index= (alphabet-97);
        count[index]++;
    }
    //display
    printf("%s\n",numolett);
    cout<<endl;
    printf("%20s","Letters");
    for(int i=97;i<=122;i++)
        printf("%3c",(char)i);
    printf("\n%20s","No. of Occurrences");
    for(int i=0; i<26;i++)
        printf("%3d",count[i]);
    cout<<endl<<endl;
}
//Brianna Thompson PA11-3
