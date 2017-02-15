/*   Author: DAVID YUAN   
Course: {135,136}   
Instructor: MIKE ZAMANSKY   
Assignment: LAB 2   
This program does does Velhurst Formula taking in parameters and outputting the years and population.
*/

#include <iostream>
using namespace std;

float p = 10; //starting value, setting all of the parameters
double g = 1.25; //growth rate (float val b/c it's a percent)
int m = 100; //carrying capacity
float h = 0.20; //minimum loss rate (float val b/c it's a percent)
int k = 20; //number of years passed
int z = 1; //the year after year 0, originally had this at 0 but didnt work cuz then year 0 would have pop of 19


int main()
{
	int a = 1;
	while (a <=3 )//we're gonna call the function 3 times
	{
/*		do{ //dowhile loop error checks to make sure a whole number is entered
		cout << "What is your starting population? (p) \n";
		cin >> p;
		}while(p<0);

*/		do{
		cout << "What is your growth rate (as a decimal) ? (g) \n";
		cin >> g;
		}while(g<0);
/*
		do{
		cout << "What is the expected carrying capacity? (m) \n";
		cin >> m;
		}while(m<0);

		do{
		cout << "What is the minimum loss rate? (as a decimal) (h) \n";
		cin >> h;
		}while(h<0);

		do{
		cout << "How many years do you want to see (k) \n";
		cin >> k;
		}while(k<0);
*/		

		cout << "Year    Population" << endl;
		while (z <= k) //z starts at 1 so loop initiates
			{
				int y = ((1+g-h)*p-(p*p)/m); //the formula on the page
				p = y; //p gets updated so that when the loop runs again, the p in the formula will be different from the one before
				cout << z << "	" << y; //displays the year and population in column format
				cout << endl; //line break
				z = z + 1; //z gets updated
			}
		a = a + 1; //updates a, whileloopception
		z = 1; //changes z back to 1 so that the while loop in the while loop can perform
		p = 10; 
		g = 1.25; 
		m = 100; 
		h = 0.20; 
		k = 20;
		}
}