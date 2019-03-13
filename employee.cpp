
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

class employee
{
private:
	char first_name[255];
	char last_name[255];
	bool empType;
	int compensation;

public:
	void set_first_name(char* value) { strcpy(first_name, value); }

	void set_last_name(char* value) { strcpy(last_name, value); }
	void set_empType(bool t) { empType = t; }
	void set_compensation(int t)
	{
		if (empType) { t = t * 2000; compensation = t; }
		compensation = t;
	}
	void printEntry() {
		if (last_name) {
			cout << last_name << ", ";
			cout << first_name << " ";
			cout << " : " << compensation;
			cout << " ...... " << endl;
		}
	}
};
int main()
{
	const int MAX = 3;
	int t;
	bool e;
	employee entries[MAX];
	for (int x = 0; x < MAX;x++) {

		char *myvalue = (char *)malloc(255);

		cout << "Entry: " << x << endl;
		cout << "Enter a first name: ";
		cin.getline(myvalue, 255);
		entries[x].set_first_name(myvalue);
		cout << "Entered value: " << myvalue << endl;


		cout << "Enter a last name: ";
		cin.getline(myvalue, 255);
		entries[x].set_last_name(myvalue);


		cout << "Enter 1 for hourly employee and 0 for annual employee : ";
		cin >> e;
		entries[x].set_empType(e);

		cout << "Enter amount: ";
		cin >> t;
		entries[x].set_compensation(t);
		cout << endl;
		cin.ignore();


	}

	for (int x = 0; x < MAX;x++) {
		entries[x].printEntry();
	}

	return 0;
}