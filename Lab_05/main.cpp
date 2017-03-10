/*
Author: DAVID YUAN   
Course: {135,136}   
Instructor: MIKE ZAMANSKY   
Assignment: <LAB_05>   
This program does 
*/ 

#include <iostream>
#include <string>
#include <cmath>
#include <digits.h>
using namespace std;

int main(){
  int num;
  do{
    cout << "Enter a number: " << endl;
    cin >> num;
    sumDigits(num);
    
    cout << "Here is your sum: " << num << endl;
    transformNum(num);

    cout << "Here is your transformed number: " << num << endl;

    return 0;
  }while(num >= 0);
}
