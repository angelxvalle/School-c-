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

//return type: float 
//parameters 1 float (f)
//purpose: This function converts a temperture from degrees Celsius to degrees Fahrenheit.
float Fahrenheit(float); 

//return type: int
//parameters 1 int (n)
//prupose: This function returns the value of any number n factorial.
int Factorial(int);

//return type: bool
//parameters 1 int (s)
//purpose: This function determins whether a given number is a perfect square.
bool IsSquare(int);

int main()
{
	//declare and initialize variables
	int month = 0, day = 0, year = 0;
	float circleRadius = 0, celsius = 0;

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

	//Prompt user for radius then call CircleArea function
	cout << "\nWhat's the radius of your circle: ";
	cin >> circleRadius;
	cout << "The area of your circle is: " << CircleArea(circleRadius); 

	//test Fahrenheit function
	cout << "\nTesting Fahrenheit function...\n";

	//call Fahrenheit to display the Fahrenheit conversion of 60 degrees Celsius.
	cout << Fahrenheit(60); 

	//Prompt user to enter Celsius degree and then convert it to Fahrenheit using Fanrenheit function.
	cout << "\nCelsius: ";
	cin >> celsius;
	cout << "Fahrenheit: " << Fahrenheit(celsius); 

	//test Factorial function
	cout << "\nTesting Factorial function...\n"; 

	//call Factorial to display the factorial of 9.
	cout << Factorial(9); 


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

//purpose: This function converts a temperture from degrees Celsius to degrees Fahrenheit.
float Fahrenheit(float c)
{
	return (9.0 / 5.0 * c + 32);
}

//prupose: This function returns the value of any number n factorial.
int Factorial(int n)
{
	int accumulator = 1;

	for ( int i = 1; i <= n; i++)
	{
		accumulator *= i;  
	}
	return accumulator;
}

//purpose: This function determins whether a given number is a perfect square.
bool IsSquare(int)
{

}
