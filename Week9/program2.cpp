// week9 program2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

class vehicle {


private:

	int wheels;
	int passengers;
	int cargo;
	string vehicleType;
	string autoType;
	vehicle*next;

public:
	void insert(string vehicleType, int wheels, int passengers, int cargo, string autoType);
	vehicle(string vehicleType, int wheels, int passengers, int cargo, string autoType);
	void printAll();
};

vehicle::vehicle(string VehicleType, int Wheels, int Passengers, int Cargo, string AutoType)
{
	vehicleType = VehicleType;
	wheels = Wheels;
	passengers = Passengers;
	cargo = Cargo;
	autoType = AutoType;
	next = NULL;
}

void vehicle::insert(string vehicleType, int wheels, int passengers, int cargo, string autoType)
{
	if (next != NULL)
	{
		next->insert(vehicleType, wheels, passengers, cargo, autoType);
	}
	else
	{

		next = new vehicle(vehicleType, wheels, passengers, cargo, autoType);
	}

}

void vehicle::printAll()
{
	//ofstream output;
	//output.open("output.txt");

	//if (output.is_open()) {
		vehicle*vLoop = next;
		while (vLoop != NULL)
		{
			cout << "vehicle: " << vLoop->vehicleType << "\n";
			//output << vLoop->vehicleType + "\n";
			cout << "Wheels : " << vLoop->wheels << "\n";
			//output << vLoop->wheels;
			//output << "\n";
			cout << "Passengers : " << vLoop->passengers << "\n";
			//output << vLoop->passengers;
			//output << "\n";
			if (vLoop->vehicleType == "automobile")
			{
				cout << "Type : " << vLoop->autoType << "\n";
				//output << vLoop->autoType + "\n";
			}
			else
			{
				cout << "cargo : " << vLoop->cargo << "\n";
				//output << vLoop->cargo;
				//output << "\n";
			}

			vLoop = vLoop->next;
		}
		/*output.close();
	}
	else
	{
		cout << "File failed to open " << "\n";
	}*/
}

int main()
{
	using namespace std;
	//char add[] = "yes";
	vehicle*Vpoint = new vehicle(" ", 0, 0, 0, " ");

	string line;
	ifstream output;
	output.open("output.txt");
	if (!output) {
		cout << "Error! output File not found." << endl;
		return 1;
	}
	if (!output.is_open()) {
		cout << "output is not open." << endl;
		return 2;
	}
	else {
		//string line;
		int wheels;
		int passengers;
		int cargo;
		string vehicleType;
		string autoType;
		output >> line;
		while (output >> vehicleType >> wheels >> passengers >> cargo >> autoType)
		{
			string vehicle = line;
			cout << vehicleType << wheels << passengers << cargo << autoType << endl;\




				output >> line;
			output.close();
			return 0;
		}
	}
} 



	/*while (add[0] == 'y' && add[1] == 'e' && add[2] == 's')
	{

		char vehicleType[100];
		cout << "Is this an automobile or a truck? Please enter 'automobile' or 'truck': ";
		cin >> vehicleType;

		if (vehicleType[0] == 't' && vehicleType[1] == 'r' && vehicleType[2] == 'u' && vehicleType[3] == 'c' && vehicleType[4] == 'k')
		{
			int wheels;
			cout << "How many wheels does this vehicle have? ";
			cin >> wheels;
			int passengers;
			cout << "How many passengers can fit in this vehicle? ";
			cin >> passengers;
			int cargo;
			cout << "How much cargo in pounds can this vehicle hold? ";
			cin >> cargo;

			Vpoint->insert(vehicleType, wheels, passengers, cargo, " ");
		}
		else
		{
			int wheels;
			cout << "How many wheels does this vehicle have? ";
			cin >> wheels;
			int passengers;
			cout << "How many passengers can fit in this vehicle? ";
			cin >> passengers;
			char autoType[100];
			cout << "What type of automobile is this? Enter van, car, or wagon : ";
			cin >> autoType;
			Vpoint->insert(vehicleType, wheels, passengers, 0, autoType);
		}

		cout << "Would you like to enter another vehicle? yes or no : ";
		cin >> add;
	}*/

	
