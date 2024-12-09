#include <iostream>

using namespace std;

int main(){
	double radius;			/*  半径  */
	double area;			/*  面积  */

	//  Step 1: Read in radius
	cout << "Enter a radius: ";
	cin >> radius;
	
	// Step 2: Compute area
	area = radius * radius * 3.14159;

	//  Step 3: Display the area
	cout << "The area is " << area << endl;
	return 0;
}
