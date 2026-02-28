#include <iostream>

using namespace std;

int main() {
	/*Stores, track, deposit, 
	and withdrawal amount of the user's choice of selection*/
	int choice;
	double balance = 0, amount;
	char rand = 'R';
	
	//Display the banking menu options to the user
	do {
	cout << "=== Banking System ===" << endl;
	cout << "1. Deposit Money" << endl;
	cout << "2. Check Balance" << endl;
	cout << "3. Withdraw Money" << endl;
	cout << "4. Exit" << endl;
	cout << "----------------------------" << endl;
	
	//Allow the user to select the option his/her choice
	cout << "Enter your choice: ";
	cin >> choice;
	
	//Handle user choice using Switch case
	switch(choice) {
		case 1:
			cout << "Enter Amount to Deposit: R";
			cin >> amount;
			balance += amount;
			cout << "Deposit is successful. Avail Balance: " << rand << balance << endl;
			break;
			
		case 2:
			cout << "Current Balance: " << rand << balance << endl;
			break;
			
		case 3:
			cout << "Enter Amount to Withdraw: R";
			cin >> amount;
			if (amount <= balance) {
				balance -= amount;
				cout << "Withdrawal is Successful. Avail Balance: " << rand << balance << endl;
			}else {
				cout << "Insufficient Funds!" << endl;
			}
			break;
			
		case 4:
			cout << "Exiting the Program. Goodbye!" << endl;
			break;
			
	    default:
			cout << "Invalid Choice. Please try again!" << endl;
	}
}while (choice != 4);
	return 0;
	
}
