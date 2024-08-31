//  this code does'nt use recall or self calling function.

#include <iostream>
using namespace std;
int fibo(int x) {
	int n = 1, n1 = 1, n2 = 1, sum;
        while (n <= x) {
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		n++;
	}
		x = sum;
		return x;
}
	int main() {
		int a;
		cout << "Enter the position:" << endl;
		cin >> a;
		cout << "The sum of position " << a << " is: " << fibo(a) << endl;
		return 0;
	}


