//24). WAP to create a class named BankAccount with private data member account_number and balance. Implement member functions to deposit and withdrawal money from the account. Also create member function to display balance.
//[Need to check whether there is sufficient balance or not while withdrawal]

#include <iostream>
using namespace std;

class BankAccount {
	private:
		long long int account_number;
		double balance;
    public:
    	void setAccount(long long int no, double initial) {
    		account_number = no;
            balance = initial;
        }

        void deposit(double amount) {
            if (amount > 0) {
                balance += amount;
                cout << "Deposited: " << amount << endl;
            }
		    else {
                cout << "Invalid deposit amount!" << endl;
            }
        }

        void withdraw(double amount) {
            if (amount > balance) {
                cout << "Insufficient balance. Withdrawal failed!" << endl;
            } 
			else if (amount <= 0) {
                cout << "Invalid withdrawal amount!" << endl;
            } 
			else {
                balance -= amount;
                cout << "Withdrawn: " << amount << endl;
            }   
        }

    void displayBalance() {
        cout << "Account Number: " << account_number << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    long long int acc_no;
    double initial, dep, wd;

    cout << "Enter account number: ";
    cin >> acc_no;
    cout << "Enter initial balance: ";
    cin >> initial;

    acc.setAccount(acc_no, initial);
    
    cout << "\n--- Deposit ---\nEnter amount to deposit: ";
    cin >> dep;
    acc.deposit(dep);

    cout << "\n--- Withdrawal ---\nEnter amount to withdraw: ";
    cin >> wd;
    acc.withdraw(wd);

    cout << "\n--- Account Summary ---" << endl;
    acc.displayBalance();

    return 0;
}

