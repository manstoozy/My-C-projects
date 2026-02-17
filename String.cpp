#include <iostream>
#include <string>
using namespace std;

int main() {
	//Assign the string to a variable
	string greeting = "Helloworld";
	string firstname = "Sfiso ";
	string secondname = "Victor";
	string fullname = firstname.append(secondname);
	
	//Print the string 
	cout << greeting << "\n";
	cout << fullname;
	return 0;
}
