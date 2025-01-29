#include "AirgeadBankingApp.h"
#include <iostream>
#include <iomanip>

using namespace std;

void AirgeadBankingApp::balanceWithoutMonthlyDeposit() {

	double balance1 = investment;

	cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
	cout << "========================================================\n";
	cout << "Year     Year End Balance     Year End Earned Interest\n";
	cout << "------------------------------------------------------\n";

	// for loop iterates over number of years to calculate interest and balance without deposits
	for (int i = 0; i < years; ++i) {
		double monthlyInterest = 0;
		//loop through each month of the year
		for (int month = 0; month < 12; ++month) {

			//calculated interest on the balance after the deposit
			monthlyInterest += (balance1) * ((interest / 100) / 12);
		}
		//added the yearly earned interest to investment
		balance1 += monthlyInterest;

		cout << i + 1 << setw(20) << fixed << setprecision(2) << balance1 << setw(20) << monthlyInterest << endl;
	}

}

void AirgeadBankingApp::balanceWithMonthlyDeposit() {

	double balance1 = investment;

	cout << "\nBalance and Interest With Additional Monthly Deposits\n";
	cout << "=====================================================\n";
	cout << "Year     Year End Balance     Year End Earned Interest\n";
	cout << "------------------------------------------------------\n";

	for (int i = 0; i < years; ++i)	{
		double monthlyInterest = 0.0;
		double yearlyInterest = 0;
		// This Holds interest accumulated for the year
		for (int month = 0; month < 12; ++month) {
			monthlyInterest = (balance1 + deposit) * ((interest / 100.0) / 12.0);
			balance1 += deposit + monthlyInterest;
			yearlyInterest += monthlyInterest;
		}
		// Update the balance at the end of the year

		//PRINT STATEMENT
		cout << i + 1 << setw(20) << fixed << setprecision(2) << balance1 << setw(20) << yearlyInterest << endl;
	}	
}