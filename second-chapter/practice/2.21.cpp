#include <iostream>
using namespace std;

int main(){
	cout << "Enter the driving distance: ";
	double driving;
	cin >> driving;

	cout << "Enter miles per gallon: ";
	double miles;
	cin >> miles;

	cout << "Enter price per gallon: ";
	double price;
	cin >> price;

	double cost = driving / miles * price;
	cost = static_cast<int>(cost*100)/ 100.0;
	cout << "The cost of driving is $" << cost << endl;
	return 0;
}
