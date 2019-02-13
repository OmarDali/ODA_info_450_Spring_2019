
#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int arrayNum[10] = {}, i;
	float sum = 0.0, mean;

	for (i = 0; i < 10; i++) {

		cout << "Original Numbers: " << endl;
		cin >> arrayNum[i];
		sum += arrayNum[i];
	}
	mean = sum / i;
	cout << "Mean is: " << mean << endl;

	for (i = 0; i < 10; i++) {

		arrayNum[i] = pow(arrayNum[i] - mean, 2);
		cout << "New Number: " << arrayNum[i] << endl;
		sum += arrayNum[i];
	}
	mean = sum / i;
	cout << "New mean is: " << mean << endl;
	cout << "The square root is: " << sqrt(mean) << endl;
}

