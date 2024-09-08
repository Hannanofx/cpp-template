#include<iostream>
using namespace std;

void complex(int w, int x, int y, int z) {
	cout <<"Equvation 1:  " << w << "+" << x << "i" << endl;
	cout <<"Equvation 2:  " << y << "+" << z << "i" << endl;
	int a1 = w + x;
	int a2 = y + z;
	cout <<"Answer:  " << w + y << "+" << x + z << "i" << endl;
}

int main() {
	int a , b , c , d ;

	// Gettuing input in equvation 1
	cout << "Enter real number in equation 1:" << endl;
	cin >> a;
	cout << "Enter imaginery in equvation 1:" << endl;
	cin >> b;
	// Getting input in equvation 2
	cout << "Enter real number in equation 2:" << endl;
	cin >> c;
	cout << "Enter imaginery in equvation 2:" << endl;
	cin >> d;
	//Calling function 
	complex(a, b, c, d);
	return 0;
}