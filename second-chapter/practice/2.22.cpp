#include <iostream>
using namespace std;

int main(){
	cout << "Enter balance and interest tate (e.g., 3 for 3%): ";
	double balance, annualInterestRate;
	cin >> balance >> annualInterestRate;

	double interest = balance *(annualInterestRate/1200);

	cout << "The interest is " << interest << endl;

	return 0;
}
