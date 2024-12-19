#include <iostream>
using namespace std;

int main(){

	cout << "Enter a degree in Celsius: ";
	double celsius;
	cin >> celsius;
	
	double fahrenheit = (9.0 / 5.0) * celsius + 32;

	cout << celsius << " Cenlsius is " << fahrenheit << " Fahrenheit" << endl;
	return 0;
}
