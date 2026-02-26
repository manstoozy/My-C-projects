
#include <iostream>

using namespace std;

int main() {
	int choice;
	int a , b;
	
	cout << "=== Simple Calculator Menu System ===" << endl;
	cout << "1. Add two numbers" << endl;
	cout << "2. Multiply two numbers" << endl;
	cout << "3. Subtract two numbers" << endl;
	cout << "4. Divide two numbers" << endl;
	cout << "5. Exit" << endl;
	cout << "--------------------------------------" << endl;
	
	cout << "Enter your choice: ";
	cin >> choice;
	
	if (choice >= 1 && choice <=4) {
		cout << "Enter first number: ";
		cin >> a;
		cout << "Enter Second number: ";
		cin >> b;
	}
	if (choice == 1) {
		cout << "Results: " << a + b << endl;
	}
	else if (choice == 2) {
		cout << "Results: " << a * b << endl;
	}
	else if (choice == 3) {
		cout << "Results: " << a - b << endl;
	}
	else if (choice == 4) {
		if (b != 0)
		cout << "Results: " << a / b << endl;
		else
			cout << "Error: Division by zero!" << endl;
		}
	else if (choice == 5) {
		cout << "Exiting the program!" << endl;
	}
	else {
		cout << "Invalid choice. Please try to run again!" << endl;
	}
	return 0;
}
