#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() {
    Account account1{ "Jane Green ", 50 };
    Account account2{ "John Blue ", -7 };

    int withdrawBalance;

    cout << "Account1: " << account1.getName() << "balance is $"  << account1.getBalance() << endl; 
    cout << "\naccount2: " << account2.getName() << "balance is $" << account2.getBalance() << endl; 
    cout << "\nEnter Withdraw amount for account1" << endl;
    cin >> withdrawBalance;

    cout << " subtracting " << withdrawBalance << " to account1 Balance" << endl;
    account1.withdraw(withdrawBalance); 

    cout << "\n\naccount1: " << account1.getName() << "balance is $"  << account1.getBalance() << endl;
    cout << "\naccount2: " << account2.getName() << "balance is $"  << account1.getBalance() << endl; 

    cout << "\nEnter Withdraw amount for account2" << endl;
    cin >> withdrawBalance;

    cout << " subtracting " << withdrawBalance << " to Account2 Balance" << endl;
    account2.withdraw(withdrawBalance);


    cout << "\n\naccount1: " << account1.getName() << "balance is $ " << account1.getBalance() << endl; 
    cout << "\naccount2: " << account2.getName() << "balance is $" << account1.getBalance() << endl;

    return 0;
}