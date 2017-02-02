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
   cout << "Enter the hours part of today's sunset time (4-9)" << endl;
   cin  >> hour;	
   cout << "Enter the minutes part of today's sunset time (0-59)" << hour << ":" << min << endl;
   cin >> min;
   if (hour < 12){
   	hour += 12; 
   	cout << "Good Morning sir/madam \n" << endl;
   }
   else if (hour >= 12 && hour < 18){
   	cout << "Good Afternoon sir/madam \n" << endl;
   }
   else if (hour >= 18 && hour <= 24){
   	cout << "Good Evening sir/madam \n" << endl;
   }
}