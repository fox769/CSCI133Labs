#include <iostream>
// #include <digits.h>
using namespace std;

int getDigit(int num, int index){ //return the index'th digit of the num
  int digits = 0;
    for (int i = 0; i < index; i++) {
      digits = num%10; //mods for every n digits
      num /= 10; 
    }
    return digits;
}

int numDigits(int num){ //return the number of digits in num
  int count = 0;
  int digits = 0;
  do 
  	{ num /= 10; digits++; } 
  	while (num != 0);
    	return digits;
}


//TASK 0
int sumDigits(int num){ //not sure if this is the correct way to do it

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
	cout << getDigit(num, num) << endl;
	cout << numDigits (num) << endl;
	return 0;
}