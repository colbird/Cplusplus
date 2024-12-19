#include <iostream>
using namespace std;

int main(){
	cout << "Enter the number of minutes: ";
	long minutes;
	cin >> minutes;

	int years = minutes / (24 * 60 * 365);
	int days = minutes % (24 * 60 *365 * years) / (24 * 60);
	
	cout << minutes << " minutes is approximately " << years << " years and " << days << " days" << endl;
	return 0;
}
