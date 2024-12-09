#include <iostream>

using namespace std;
int main(){
	long people = 312032486;
	int i = 0;	
	while (i++ < 5){
		people += (31536000 * 5 / 7 + 31536000 * 5 / 45 - 31536000 * 5 / 13);
		cout << "五年后" << people << endl;
	}
	return 0;
}
