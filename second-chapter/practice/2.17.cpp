#include <iostream>
#include <cmath>
using namespace std;


int main(){
	cout << "Enter the temperature in Fahrenheit: ";
	double temperatureFahrenheit;
	cin >> temperatureFahrenheit;

	cout << "Enter the wind speed in miles per hour: ";
	double speed;
	cin >> speed;

	double windChill = 35.74 + 0.6215 * temperatureFahrenheit - 35.75 * pow(speed, 0.16) + 0.4275 * temperatureFahrenheit * pow(speed, 0.16);
	cout << "The wind chill index is " << windChill << endl;

	return 0;
}
