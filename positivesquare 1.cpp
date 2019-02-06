

#include "pch.h"
#include <iostream>
#include "cmath"
using namespace std;
int main()
{
	double x = 0;

	cout << "Please enter a positive value:\n";
	cin >> x;

	while (x > 0) {
		cout << "The squre value is: " << pow(x, x) << endl;
		if (x > 0)
		{
			cout << "Enter another value: " << endl;
			cin >> x;
		}
		if (x <= 0)
		{
			break;
		}
	}
	return 0;
}

