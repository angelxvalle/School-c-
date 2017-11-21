/*functions.cpp
Angel Valle
November 21, 2017
This project will demonstrate the use of functions.
*/

#include<iostream>
#include<string>
using namespace std;

//void function that accepts one reference parameter: string
//function prompts the user for his/her name
void GetName(string& name);

//function that accepts three value parameter: int, int, int
//function returns true if the value n is between min and max, otherwise returns //false
bool IsValidInput(int n, int min, int max);

//void function accepts one reference parameter: int
//function displays the following menu and prompts the user for choice
//1) Enter your name
//2) Determine if a number is odd
//3) Square a number 
//4) Exit
void DisplayMenu(int &choice);

//function that accepts one value parameter: int
//function returns true if n is odd, otherwise returns false
bool IsOdd(int n);

//void function that accepts one reference parameter: float
//function squares the value n
void SquareN(float &n);

int main()
{
	int menuChoice = 0;
	string userName = " ";
	int num1 = 0;
	float num2 = 0.0;
	do
	{
		//call a function to display a menu (1 point)


		//call a function to validate that menuChoice is between 1 and 4 (1 pt)


		switch (menuChoice)
		{
		case 1:
			//call a function to get username (1 point)		

			//display userName


			break;
		case 2:
			//prompt user for num1	
			cout << "Enter an integer: ";
			cin >> num1;
			//call a function to display whether or not num is odd (1 point)


			break;
		case 3:
			//prompt for num2
			cout << "Enter a number: ";
			cin >> num2;
			//call a function to square num2  (1 point)		


			//display num2 squared



			break;
		case 4:
			cout << "Good bye" << endl;
		} //end switch
	} while (menuChoice != 4);

	return 0;
}
//function definitions (4 pts each)

//function prompts the user for his/her name
void GetName(string& name)
{
	string name;

	cout << "Enter your name: ";
	cin >> name; 

	return name; 
}

//function returns true if the value n is between min and max, otherwise returns //false
bool IsValidInput(int n, int min, int max)
{
	if (n >= min && n <= max)
		return true;
	else
	{
		return false; 
	}
}

//function displays the following menu and prompts the user for choice
//1) Enter your name
//2) Determine if a number is odd
//3) Square a number 
//4) Exit
void DisplayMenu(int &choice)
{
	cout << "1)Enter your name\n2)Determine if a number is odd\n3)Square a number\n4)Exit\n";
	cin >> choice; 
}










}
