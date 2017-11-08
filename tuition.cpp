/*tuition.cpp
Angel Valle
October 19, 2017
This program calculates the increase in tuition cost over a five year period.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
		//Declare and initialize variables and constants
	const auto RATE = 0.04;
	const auto INITIAL_COST = 115.0;
	auto costPerCredit = 0.0;
			
		//Display chart heading
	cout << "Year\t\tCost per Credit\n-----------------------------\n";
	costPerCredit = INITIAL_COST;
		for (auto year = 2008; year <= 2013; year++)
		{
			cout << fixed << setprecision(2);
			cout << year << "\t\t$" << costPerCredit << endl; //display year and costPerCredit
				//Calculate costPerCredit with increase
			costPerCredit = costPerCredit + costPerCredit * RATE;
		}




	return 0;
}
