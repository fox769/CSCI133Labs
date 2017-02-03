/*
Author: David Yuan
Course: {135,136}
Instructor: Mr. Zamansky
Assignment: Lab 1 Task 1

This program asks user for time and greets them appropriately based on their input.
 */

#include <iostream>
#include <ctime>
using namespace std;

int main() {
   time_t t;
   struct tm *now;
   t = time(0);             // get current time                                           
   now = localtime(&t);     // adjust for local timezone
   int hour = now->tm_hour; // retrieve current hour
   int min = now->tm_min;   // retrieve current min
	/*cin >> "What hour is it?" >> hour >> endl;
	cin >> "What minute is it?" >> min >> endl;
	*/
   cout << "Enter the hours part of today's sunset time (4-9)" << endl; //user input
   cin  >> hour;	
   cout << "Enter the minutes part of today's sunset time (0-59)" << endl; //same as above
   cin >> min;
   if (hour < 12){ //if statement, if user input hours < 12
   	hour += 12; //if user input hours 
   	cout << "Good Morning sir/madam, the time is \n" << hour << "," << min << endl; //display formatting: hour,min
   }
   else if (hour >= 12 && hour < 18){ //if user input hours after 12 but before 18 (6pm), then afternoon message displays
   	cout << "Good Afternoon sir/madam \n" << endl;
   }
   else if (hour >= 18 && hour <= 24){ //same as above but for hours 18 to 24 (midnight)
   	cout << "Good Evening sir/madam \n" << endl;
   }
   cout << "test" << endl;
}