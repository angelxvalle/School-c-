/*functions.cpp
Angel Valle
November 6, 2017
This program creates and test funtions with atleast 2 different function calls.
*/

#include <iostream>

using namespace std; 

//function prototypes

//return type: void
//parameters: 3 ints (m, d and y)
//purpose: Prints the date.
void PrintDate(int, int, int);

//return type: float 
//parameters 1 float (a)
//purpose : This function returns the area of the given circle
float CircleArea(float);

int main()
{
	//declare and initialize variables
	int month = 0, day = 0, year = 0;
	float radius = 0;

	//test PrintDate function
	cout << "Testing PrintDate function...\n"; 
	//call PrintDate function to print 6/28/2011
	PrintDate(6, 28, 2011);

	//prompt the user for date
	cout << "\nWhat is today's date?\n";
	cout << "Month: ";
	cin >> month;
	cout << "Day: ";
	cin >> day;
	cout << "Year: ";
	cin >> year;

	//call PrintDate to print the user's date
	PrintDate(month, day, year); 

	//test CircleArea function
	cout << "\nTesting Circle Area function...\n";

	//call CircleArea to display the area of a circle with a radius of 10
	cout << CircleArea(10); 
	 

	return 0;
}

//function definitions 

//purpose: Prints the date.
void PrintDate(int m, int d, int y)
{
	cout << m << "/" << d << "/" << y; 
}

//purpose : This function returns the area of the given circle
float CircleArea(float r)
{
	return r * r * 3.1415;
}
