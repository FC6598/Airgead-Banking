#ifndef AIRGEAD_BANKING_APP_H
#define AIRGEAD_BANKING_APP_H

class AirgeadBankingApp {

private:
	double investment;
	double deposit;
	double interest;
	int years;

public:

	// Parameterized constructor
	AirgeadBankingApp(double p_investment, double p_deposit, double p_interest, int p_years) : investment(p_investment),
		deposit(p_deposit), interest(p_interest), years(p_years) {}

	void balanceWithoutMonthlyDeposit();
	void balanceWithMonthlyDeposit();

};
#endif