// Circumference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;
double calculateCircumference(double radius);
const double pi = 3.14;


int main()
{
	cout << "Please enter radius" << endl;
	double radius;
	cin >> radius;
	cout << calculateCircumference(radius);
	return 0;
}

double calculateCircumference(double radius) {
	double circumference = 2 * pi*radius;
	return circumference;
}