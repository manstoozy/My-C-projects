#include <iostream>

using namespace std;

int main() {
	
	int choice;
	double balance = 0, amount;
	
	cout << "=== Banking System ===" << endl;
	cout << "1. Diposit Money" << endl;
	cout << "2. Check Balance" << endl;
	cout << "3. Withdraw Money" << endl;
	cout << "4. exit" << endl;
	cout << "------------------------" << endl;
	
	cout << "Enter your choice: ";
	cin >> choice;
	
	if (choice == 1) {
		cout << "Enter Amount to Deposit: ";
		cin >> amount;
		balance += amount;
		cout << "Deposit Successful. Avail Balance: " << balance << endl;
	}
	else if(choice == 2) {
		cout << "Current Balance: " << balance << endl;
	}
	else if(choice == 3) {
		cout << "Enter Amount to Withdraw: ";
		cin >> amount;
		if(amount <= balance) {
			balance -= amount;
			cout << "Withdrawal Successful. Avail Balance: " << balance << endl;
		}else {
			cout << "Insufficient Funds!" << endl;
		}
	}
	else if(choice == 4) {
		cout << "Exiting the Program. Goodbye!" << endl;
	}else {
		cout << "Invalid Inputs. Please try again!" << endl;
	}
	return 0;

}
