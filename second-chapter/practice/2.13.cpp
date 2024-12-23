#include <iostream>
using namespace std;

int main(){
	cout << "Enter the monthly saving amount: ";
	double amount;
	cin >> amount;
	
	double sixthMonthAccountValue = 0;

	// 1
	sixthMonthAccountValue = (sixthMonthAccountValue + amount) * (1 + 0.00417);
	// 2
	sixthMonthAccountValue = (sixthMonthAccountValue + amount) * (1 + 0.00417);
	// 3
	sixthMonthAccountValue = (sixthMonthAccountValue + amount) * (1 + 0.00417);
	// 4
	sixthMonthAccountValue = (sixthMonthAccountValue + amount) * (1 + 0.00417);
	// 5
	sixthMonthAccountValue = (sixthMonthAccountValue + amount) * (1 + 0.00417);
	// 6
	sixthMonthAccountValue = (sixthMonthAccountValue + amount) * (1 + 0.00417);

	sixthMonthAccountValue = static_cast<int>(sixthMonthAccountValue * 100) / 100.0;

	cout << "After the sixth month, the account value is $" << sixthMonthAccountValue << endl;
	return 0;
}
