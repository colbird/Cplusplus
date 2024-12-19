#include <iostream>
using namespace std;

int main(){
	// Receive the amount
	cout << "Enter an amount in double, for example 11.56: ";
	double amount;
	cin >> amount;

	int remainingAmount = (int)(amount * 100);

	// Fine the number of one dollars
	int numberOfOneDollars = remainingAmount / 100;
	remainingAmount %= 100;

	// Fine the number of quarters in the remaining amount
	int numberOfQuarters = remainingAmount / 25;
	remainingAmount %= 25;

	// Fine the number of dimes in the ramaining amount
	int numberOfDimes = remainingAmount / 10;
	remainingAmount %= 10;

	// Fine the number of nickels in the ramaining amount
	int numberOfNickels = remainingAmount / 5;
	remainingAmount %= 5;
	
	// Find the number of pennies in the remaining amount
	int numberOfPennies = remainingAmount;

	// Display results
	cout << "Your amount "<< amount <<" consists of" << endl <<
		numberOfOneDollars << " dollars" << endl <<
		numberOfQuarters << " quarters" << endl <<
		numberOfDimes << " dimes" << endl <<
		numberOfNickels << " nickels" << endl <<
		numberOfPennies << " pennies" << endl;
	return 0;
}
