//
//  PA10-4.cpp
//  C++ Program
//
//  Created by Brianna Thompson on 11/14/18.
//  Copyright © 2018 Brianna Thompson. All rights reserved.
//PA 10-4 (25 points) Write a program that fills an array of size 100 with 100 random integers, 0-9.
//Count how many time each integer appears in the array and display the results.
//Hint: To keep the random numbers in your array from constantly changing, do not include the srand(time(0)); line in your program until it is running perfectly.
//Hint: You should need at least two arrays, one for random integers (size 100, [0] –[99]) and one to keep track of number of occurrences (size 10, [0] – [9]), and use nested for loops. Don't forget to initialize arrays to 0 where applicable.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    //matrix
    int matrix[10][10], zero, one, two, three, four, five, six, seven, eight, nine;
    for (int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            matrix[i][j]={rand()%10};
            //count! WOO!
            if(matrix[i][j]==0){
                zero++;
            }if(matrix[i][j]==1){
                one++;
            }if(matrix[i][j]==2){
                two++;
            }if(matrix[i][j]==3){
                three++;
            }if(matrix[i][j]==4){
                four++;
            }if(matrix[i][j]==5){
                five++;
            }if(matrix[i][j]==6){
                six++;
            }if(matrix[i][j]==7){
                seven++;
            }if(matrix[i][j]==8){
                eight++;
            }if(matrix[i][j]==9){
                nine++;
            }
        }
    }
    cout<<"There are "<<zero<<" zeros."<<endl;
    cout<<"There are "<<one<<" ones."<<endl;
    cout<<"There are "<<two<<" twos."<<endl;
    cout<<"There are "<<three<<" threes."<<endl;
    cout<<"There are "<<four<<" fours."<<endl;
    cout<<"There are "<<five<<" fives."<<endl;
    cout<<"There are "<<six<<" sixes."<<endl;
    cout<<"There are "<<seven<<" sevens."<<endl;
    cout<<"There are "<<eight<<" eights."<<endl;
    cout<<"There are "<<nine<<" nines."<<endl;
    return 0;
}
//Brianna Thompson PA 10-4

