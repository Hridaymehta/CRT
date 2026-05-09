#include <iostream>
using namespace std;

class RBI {
	void statement() {
		cout << "RBI statement" << endl;
	}
};

class Payment : public RBI {
private:
	int amount;

public:
	void setAmount(int amt) {
		this->amount = amt;
	}

	int getAmount() {
		return this->amount;
	}

	void transfer() {
		cout << "Transferring payment of amount: " << this->amount << endl;
	}
};

class loans : public RBI {
	int cibilScore;
	double interest;

public:
	void statement() {
		cout << "Loan approved with interest: " << this->interest << endl;
	}
};

class UPIPayment : public Payment, public loans {
private:
	string app;
public:
	void transfer(int amt) {
		cout << amt << " transferred via UPI" << endl;
	}
};

int main() {
	UPIPayment upiPayment;
	upiPayment.transfer(1000); // Calls the overridden method in UPIPayment
	return 0;
}