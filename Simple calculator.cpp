#include <iostream>
using namespace std;

int main() {
	//Assign variebles
	int x, y;
	int sum;
	
	//Allow the user to input numbers
	cout << "Enter a number: ";
	cin >> x;
	cout << "Enter another number: ";
	cin >> y;
	
	//Perform the calculation
	sum = x + y;
	
	//print the output using cout
	cout << "The answer is: " << sum;
	return 0;
}
