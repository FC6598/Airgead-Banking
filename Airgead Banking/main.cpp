#include "AirgeadBankingApp.h"
#include <iostream>

using namespace std;

int main() {

	double investment;
	double deposit;
	double interest;
	int years;

	cout << "********************************\n";
	cout << "********** Data Input **********\n";
	cout << "Initial Investment Amount: \n";
	cout << "Monthly Deposit: \n";
	cout << "Annual Interest: \n";
	cout << "Number of years: \n";

	cout << "Press enter to continue...";
	cin.get();

	cout << "\n********************************\n";
	cout << "********** Data Input **********\n";
	cout << "Initial Investment Amount: $";
	cin >> investment;
	cout << "Monthly Deposit: $";
	cin >> deposit;
	cout << "Annual Interest: %";
	cin >> interest;
	cout << "Number of years: ";
	cin >> years;

	AirgeadBankingApp balance(investment, deposit, interest, years);

	balance.balanceWithoutMonthlyDeposit();
	balance.balanceWithMonthlyDeposit();

	return 0;
}
    