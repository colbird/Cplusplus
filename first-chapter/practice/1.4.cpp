#include <iostream>

using namespace std;


int main(){
	int a = 1;
	cout << "\ta\ta6^2\ta^3" << endl;
	while (a < 5){
		cout << '\t' << a << '\t' << a*a << '\t' << a*a*a << endl;
		a++;
	}
	return 0;
}
