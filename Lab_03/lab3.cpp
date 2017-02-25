/*   Author: DAVID YUAN   
Course: {135,136}   
Instructor: MIKE ZAMANSKY   
Assignment: LAB 3   
This program does does...
*/

// ========================= RECT =========================


#include <iostream>
#include <string>
#include <math.h>
using namespace std;

string line(int l, string c){
	string s;
	for(int i=0; i<l;i++)
		s+=c;
	return s;
}

string rect(int w, int h) {
	string s;
	for (int i=0;i<w;i++)
	{
		cout << "*";
	}
	//	return s;

		for(int i=0;i<h;i++)
		{
			cout << "*" << " " << "*" << endl;
			s+=line(w,"*")+"\n";
		}
		return s;
}


string tri1(int side) {
	string s;
	for(int i=1;i<=side;i++)
	{
		s+=line(i,"*")+"\n";
	}
	return s;
}

string trap(int side, int height) {
	string s;
	for(int i=height-5;i<=height;i++)
	{
		s+=line(height-i," ")+line(i,"*")+line(i-1,"*")+"\n";
	}
	return s;
}

string tri2(int side) { //upper half of square
	string s;
	for(int i=0;i<side;i++)
	{
		s+=line(i," ")+line(side-i,"*")+"\n";
	}
  	return s;
}

int main(){

		cout << endl;

		cout << "========================= TRI1 =========================" << endl << endl;
		cout << tri1(6) << endl;

		cout << "========================= TRI2 =========================" << endl << endl;
		cout << tri2(6) << endl;

		cout << "========================= TRAP =========================" << endl << endl;
		cout <<	trap(5,3) << endl;

		cout << "========================= RECT =========================" << endl << endl;
		cout << rect(6,3) << endl;


	return 0;
}



/*
string tri1 (int side);

string trap (int side, int height);

string tri2 (int side);

string circle (int r);



int main()
{
	int stars = 
	i>0, i--
	cout << << endl;
	
	return 0;
}*/
