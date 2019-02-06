// build_functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
char  get_user_input();
void to_upper_case(char &letter);
int main() {
	char user_input_letter;
	cout << "Type in a letter grade, lowercase or uppercase." << endl;
	if ('0' != (user_input_letter = get_user_input())) {
		to_upper_case(user_input_letter);
		switch (user_input_letter) {
		case 'A': cout << "Super Great job on an A!" << endl;break;
		case 'B': cout << "Great job on a B!" << endl;break;
		case 'C': cout << "Good job on a C!" << endl;break;
		case 'D': cout << "Keep at it, you can get there." << endl;break;
		case 'F': cout << "F is for #fail" << endl;break;
		default: cout << "This is not a valid grade: " << user_input_letter << endl;
		}
	}
	cout << "You have entered 0.  Exiting." << endl;
}
char  get_user_input() {
	char grade;
	cin >> grade;
	return grade;
}
void to_upper_case(char &letter) {
	switch (letter) {
	case 'a': cout << "Super Great job on an A!" << endl;break;
	case 'b': cout << "Great job on a B!" << endl;break;
	case 'c': cout << "Good job on a C!" << endl;break;
	case 'd': cout << "Keep at it, you can get there." << endl;break;
	case 'f': cout << "F is for #fail" << endl;break;

	}

}