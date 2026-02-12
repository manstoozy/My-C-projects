#include <iostream>
using namespace std;

int main() {
	//Assign values to variables
	int itemPrice = 8500;
	int shippingPrice = 250;
	
	//Sum the total amount 
	char currency = 'R';
	int sum = itemPrice + shippingPrice;
	
	//Print the sum using cout
	cout << "The total cost of the items is: " << currency << sum;
	return 0;
}
