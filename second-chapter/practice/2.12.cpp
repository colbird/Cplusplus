#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout << "Enter speed and acceleration: ";
	double speed, acceleration;
	cin >> speed >> acceleration;

	double length = pow(speed, 2) / (2 * acceleration);

	cout << "The minimum runway length for this airplane is " << length << endl;

	return 0;
}
