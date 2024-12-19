#include <iostream>
using namespace std;

int main(){
	cout << "Enter the subtotal and gratuity rate: ";
	double subtotal, gratuityRate;
	cin >> subtotal >> gratuityRate;

	double gratuity = subtotal * gratuityRate / 100;
	double total = gratuity + subtotal;

	cout << "The gratuity is $" << gratuity << " and total is $" << total << endl;

	return 0;
}
