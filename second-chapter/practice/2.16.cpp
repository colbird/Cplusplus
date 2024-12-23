#include <iostream>
#include <cmath>
using namespace std;


int main(){
	cout << "Enter the side: ";
	double side;
	cin >> side;

	double Area = pow(27, 0.5)/ 2 * pow(side, 2);
	cout << "The area of the hexagon is " << Area << endl;
	return 0;
}
