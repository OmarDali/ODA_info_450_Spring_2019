

#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	int year;

	cout << "To find out if a year is a Leap Year or NOT?" << endl;
	cout << "Enter the year: " << endl;
	cin >> year;

	if (year <= 0) {
		cout << "Try Again!" << endl;
		return 0;
	}

	else if (year / 4 == 0) {
		cout << year << " is a Leap Year!" << endl;
		cout << "\n" << endl;
		return main();
	}

	else if (year == 2000 || year == 2400) {
		cout << year << " is a Leap Year!" << endl;
		cout << "\n" << endl;
		return main();
	}
	else if (year / 100 == 0) {
		cout << year << " is NOT a Leap Year!" << endl;
		cout << "\n" << endl;
		return main();
	}
	else if (year % 100 == 0 && year % 400 == 0) {
		cout << year << " is a Leap Year!" << endl;
		cout << "\n" << endl;
		return main();

	}
	else if (year == 1800 || year == 1900)
	{
		cout << year << " is NOT a leap year." << endl;
		cout << "\n" << endl;
		return main();
	}
	else
		cout << year << " is NOT a leap year." << endl;
	cout << "\n" << endl;
	return main();
