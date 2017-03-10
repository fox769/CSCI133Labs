/*
Author: DAVID YUAN   
Course: {135,136}   
Instructor: MIKE ZAMANSKY   
Assignment: <LAB_05>   
This program takes in user input and stores
it as an integer. With said integer, if that
number is greater than 9, then all of the 
individual digits are added up and if the
new number is greater than 9, the function
continues until it is not and prints that
number.
*/ 

#include <iostream>
#include <cmath>
using namespace std;

// Precondition: num > 0 
// Postcondition: the return value is the 
// 	iterated sum of digits of num 
// 		int sumDigits(int num);

int getDigit(int num, int index);  // return the index’th digit of num
int numDigits(int num);            // return the number of digits in num

//TASK 0
int sumDigits(int num) //not sure if this is the correct way to do it
{
    int sum = 0;
    
    while(num > 0 || sum > 9) //does the function if the num>9
    {
        if(num == 0)
        {
            num = sum;
            sum = 0;
        }
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
 	int num;
    cout << "enter a number" << endl;
    cin >> num;
    cout << sumDigits(num) << endl;
    return 0;
}


