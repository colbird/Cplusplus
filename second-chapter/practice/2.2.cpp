#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout << "Enter the radius and length of a cylinder: ";
	double radius, length;
	cin >> radius >> length;

	double area = pow(radius, 2) * 3.14159;
	double volume = area * length;

	cout << "The area is " << area << endl <<
		"The volume is " << volume << endl;
	return 0;
}
