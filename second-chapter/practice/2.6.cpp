#include <iostream>
using namespace std;

int main(){
	cout << "Enter a number between 0 and 1000: ";
	int number;
	cin >> number;

	int sum = 0;
	while(number){
		sum += number % 10;
		number /= 10;
	}

	cout << "The sum of the digit is " << sum << endl;

	return 0;
}
