/*   Author: DAVID YUAN   
Course: {135,136}   
Instructor: MIKE ZAMANSKY   
Assignment: LAB 2   
This program does does Velhurst Formula taking in parameters 
*/

#include <iostream>
using namespace std;

int main()
{
	float p = 10; //starting value, setting all of the parameters
	double g = 1.25; //growth rate (float val b/c it's a percent)
	int m = 100; //carrying capacity
	float h = 0.20; //minimum loss rate (float val b/c it's a percent)
	int k = 20; //number of years passed
	int z = 1; //the year after year 0, originally had this at 0 but didnt work cuz then year 0 would have pop of 19
	/*
	cout << "What is your starting population? (p) \n";
	cin >> p;
	*/
	cout << "What is your growth rate (as a decimal) ? (g) \n";
	cin >> g;
	/*
	cout << "What is the expected carrying capacity? (m) \n";
	cin >> m;
	cout << "What is the minimum loss rate? (as a decimal) (h) \n";
	cin >> h;
	cout << "How many years do you want to see (k) \n";
	cin >> k;
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
	return 0;
}