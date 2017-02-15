/*   Author: DAVID YUAN   
Course: {135,136}   
Instructor: MIKE ZAMANSKY   
Assignment: LAB 2   
This program does does Velhurst Formula */ 

#include <iostream>
using namespace std;

int main()
{
	int p = 10; //starting value, setting all of the parameters
	float g = 1.25; //growth rate (float val b/c it's a percent)
	int m = 100; //carrying capacity
	float h = 0.20; //minimum loss rate (float val b/c it's a percent)
	int k = 20; //number of years passed
	int y;
	int z = 0;
	/*
	cout << "What is your starting population? (p) \n";
	cin >> p;
	cout << "What is your growth rate (as a decimal) ? (g) \n"; 
	cin >> g;
	cout << "What is the expected carrying capacity? (m) \n";
	cin >> m;
	cout << "What is the minimum loss rate? (as a decimal) (h) \n";
	cin >> h;
	cout << "How many years do you want to see (k) \n";
	cin >> k;
	*/
	cout << p << endl;
	cout << g << endl;
	cout << m << endl;
	cout << h << endl;
	cout << k << endl;

	int x = (z+g-h)*p-(p*p/m);
	cout << "Year    Population" << endl;
	while (z < k + 1)
		{
			cout << z << "	" << (z+g-h)*p-(p*p/m);
			cout << z << endl;
			z = z + 1;
		}
//		cout << ""
	return 0;
}