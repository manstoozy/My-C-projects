#include <iostream>
#include <string>
using namespace std;

int main() {
	string Fullname;
	cout << "Enter your fullname: ";
	getline (cin, Fullname );
	cout << "Your name is: " << Fullname;
	return 0;
}
