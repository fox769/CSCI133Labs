#include <iostream>
#include <digits.h>
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
/*
int transformNum(int num){
  int sum = 0;
  for (int i = 1; i < numDigits; i++) {
    sum += getDigits(num, i);
  }
    
  
}
*/
int sumDigits(int num){
	int sum = 0;
	for(int i = 0;i < numDigits(num);i++){
		sum+=getDigit(num, i);
	}
	if(sum >= 10){
		return sumDigits(sum);
	}else{
		return sum;
	}
}

void transformNum(int& num){
	if(sumDigits(num) == 9){
		return;
	}

	int modifier = sumDigits(num); //for 59, modifier should be 5
	if(getDigit(num, 0) + 9 - modifier >= 10){
		num = num - modifier;
	}else{
		num = num + 9 - modifier;
	}
}
