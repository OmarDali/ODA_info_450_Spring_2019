

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	char name[30][164];

	for (int i = 0; i < 30; i++)
	{
		cout << "Please enter the students name: " << endl;
		cin.getline(name[i], 20);
	}

	for (int i = 0; i < 30; i++)
	{
		cout << "Class List: " << name[i] << endl;
	}
}