#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout << "Enter x1 and y1: ";
	double x1, y1;
	cin >> x1 >> y1;
	cout << "Enter x2 and y2: ";
	double x2, y2;
	cin >> x2 >> y2;

	double between = pow((pow(x2 - x1, 2) + pow(y2 - y1, 2)), 1.0 / 2);
	cout << "The distance between the two points is " << between << endl;
	return 0;
}
