#include <iostream>
#include <string>

class Account {
    public: Account(std::string accountName, int initialBalance) : name{ accountName } {

	if (initialBalance > 0) {
		balance = initialBalance;
	}
}

void withdraw(int withdrawBalance){
    if (balance > withdrawBalance){
        balance = balance - withdrawBalance;
    }
    else{
        std::cout << "Withdrawal amount exceeded account balance.";
    }
}

int getBalance() const {
	return balance;
}
void setName(std::string accountName) {
	name = accountName;
}
std::string getName() const{
	return name; 
}

private:
  std::string name; 
  int balance{0};

};