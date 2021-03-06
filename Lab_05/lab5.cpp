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
    cout << "Enter a number:" << endl;
    cin >> num;
    cout << "The sum of your number is " << sumDigits(num) << endl;
    return 0;
}


