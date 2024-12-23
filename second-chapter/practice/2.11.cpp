#include <iostream>
using namespace std;

int main(){
	cout << "Enter the number of years: ";
	int years;
	cin >> years;

	long people = 312032486 + (31536000 * years / 7.0 + 31536000 * years / 45.0 - 31536000 * years / 13.0);
	cout << "The population in " << years << " years is " << people << endl;
	return 0;
}
