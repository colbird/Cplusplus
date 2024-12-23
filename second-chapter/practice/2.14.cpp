#include <iostream>
#include <cmath>
using namespace std;



int main(){
	cout << "Enter weight in pounds: ";
	double pounds;
	cin >> pounds;
	cout << "Enter height in inches: ";
	double inches;
	cin >> inches;

	double bmi = (pounds * 0.45359237)/pow(inches * 0.0254, 2);

	cout << "BMI is " << bmi << endl;
	return 0;
}
