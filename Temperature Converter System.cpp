#include <iostream>

using namespace std;

int main() {
	
	int choice;
	double kelvin = 273.15, temp;

	cout << "=== Temperature Converter System ===" << endl;
	cout << "1. Convert Celsius to Fahrenheit" << endl;
	cout << "2. Convert Fahrenheit to Celsius" << endl;
	cout << "3. Convert Fahrenheit to Kelvin" << endl;
	cout << "4. Exit" << endl;
	cout << "-------------------------------------" << endl;
	
	cout << "Enter your choice above: ";
	cin >> choice;
	
	if (choice == 1) {
		cout << "Enter temperature in Celsius: ";
		cin >> temp;
		cout << "Fahrenheit: " << (temp * 9/5) + 32 << endl;
	}
	else if (choice == 2) {
		cout << "Enter temperature in Fahrenheit: ";
		cin >> temp;
		cout << "Celsius: " << (temp - 32) * 5/9 << endl;
	}
	else if (choice == 3) {
		cout << "Enter temperature in Fahrenheit: ";
		cin >> temp;
		cout << "Kelvin: " << temp + kelvin << endl;
	}
	else if (choice == 4) {
		cout << "Exiting the Program. Goodbye!" << endl;
	} else {
		cout << "Invalid input. Please try again" << endl;
	}
	return 0;
}
