/*   Author: DAVID YUAN   
Course: {135,136}   
Instructor: MIKE ZAMANSKY   
Assignment: LAB 4
This program takes in numbers (n) and (k) and outputs n!, k!, and (n-k)!.
*/

#include <iostream>

using std::cout;
using std::endl;

int factorial(int);

int factorial(int n) //I searched it up, not sure if this is the way to do it.
{
	int num;
    if (n > 1) 
    {
        num = n*factorial(n-1);
    }
    else 
    {
        return 1;
    }
}

int c(int n, int k){

		cout << endl << n * factorial (n-1) << endl << endl; //outputs n!
		cout << k * factorial (k-1) << endl << endl; //outputs k!
		cout << (n-k)* factorial (n-k-1) << endl; //outputs (n-k)!
}

int c2(int n, int k){

}


//double c4(int n, int k);

int main(){
	cout << endl << c(5,4) << endl << endl; 
	cout << c(3,2);	cout << endl << c(5,4);
	return 0;
}