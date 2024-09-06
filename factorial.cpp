#include <iostream>
using namespace std;

int fact(int x) {
	int fac = 1;
	while (x>1) {
		fac = fac * x;
		x--;
	}
	x = fac;
	return x;
}

int main() {
	int num;
	cout << "Enter a number u want factorial:" << endl;
	cin >> num;
	if (num < 0)
		cout << "Error! Negative number spotted! try later Buddy" << endl;
	else
	cout << "Factorial of " << num << " is:" << fact(num) << endl;
	return 0;
}