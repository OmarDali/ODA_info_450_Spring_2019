

#include "pch.h"
#include <iostream>

using namespace std;


int main()
{
	int x, i;
	bool primeNum = true;
	do
	{
		cout << "Please enter an integer: ";
		cin >> x;


		for (i = 2; i <= x / 2; ++i)
		{
			if (x % i == 0)
			{
				primeNum = false;
				break;
			}
		}
		if (primeNum)
			cout << "This is a prime number \n";
		else
			cout << "This is not a prime number \n";
	} while (x != 0);
	return 0;
}
