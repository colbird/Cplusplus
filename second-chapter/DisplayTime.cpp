#include <iostream>
using namespace std;

int main(){
	int seconds;
	cout << "Enter an integet for seconds: ";
	cin >> seconds;

	int minutes = seconds / 60;
	int remainingSeconds = seconds % 60;

	cout << seconds << " seconds is " << minutes << " minutes and "
		<< remainingSeconds << " seconds" << endl;

	return 0;
}
