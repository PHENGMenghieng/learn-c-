//File Name: <your file name goes here>
//Author: <your name goes here>
//Email address: <your email address>
//Assignment: <what ever assignment you are doing>
//Description: <the program description
//Last Changed: <what date you last altered the program

#include <iostream> 
using namespace std;

int main()
{
	int numberOfBars;
	double oneWeight, totalWeight;

	cout << "Enter the number of candy bars in a package\n"; 
	cout << "and the weight in ounces of one candy bar. \n"; 
	cout << "Then press return.\n"; 
	cin >> numberOfBars;
	cin >> oneWeight;

	totalWeight = oneWeight * numberOfBars;

	cout << numberOfBars << " candy bars\n"; 
	cout << oneWeight << " ounces each\n";

	//cout.setf(ios::fixed);			//set up 2-decimal precision
	//cout.setf(ios::showpoint);		
	//cout.precision(2);

	cout << "Total weight is " << totalWeight << " ounces. \n"; 
	cout << "Try another brand.\n\n";

	cout << "Enter the number of candy bars in a package\n"; 
	cout << "and the weight in ounces of one candy bar.\n";
	cout << "Then press return.\n"; 
	cin >> numberOfBars;
	cin >> oneWeight;

	totalWeight = oneWeight * numberOfBars;

	cout << numberOfBars << " candy bars\n"; 
	cout << oneWeight << " ounces each\n";

	cout << "Total weight is " << totalWeight << " ounces. \n";
	cout << "Perhaps an apple would be healthier.\n";

	return 0;
}

