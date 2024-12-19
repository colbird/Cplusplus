#include <iostream>
#include <ctime>

using namespace std;

int main(){
	cout << "Enter the time zone offset to GMT: ";
	int timeZoneOffset;
	cin >> timeZoneOffset;

	int totalSeconds = time(0);
	int currentSecond = totalSeconds % 60;

	int totalMinutes = totalSeconds / 60;
	int currentMinute = totalMinutes % 60;

	int totalHours = totalMinutes / 60;
	int currentHours = totalHours % 24 + timeZoneOffset;

	cout << "The current time is " << currentHours << ":" << currentMinute << ":" << currentSecond << endl;
	return 0;
}
