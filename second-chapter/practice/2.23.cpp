#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout << "Enter investment amount: ";
	double investmentAmount;
	cin >> investmentAmount;

	cout << "Enter annual interest rate in percentage: ";
	double annualInterestRate;
	cin >> annualInterestRate;

	cout << "Enter number of years: ";
	double numberOfYears;
	cin >> numberOfYears;

	double monthlyInterestRate = annualInterestRate / 1200;
	double futureInvestmentValue = investmentAmount * pow((1 + monthlyInterestRate), numberOfYears*12);
	futureInvestmentValue = static_cast<long>(futureInvestmentValue*100)/ 100.0;

	cout << "Accumulated value is $" << futureInvestmentValue << endl;
	return 0;
}
