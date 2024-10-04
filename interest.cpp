#include <iostream>
using namespace std;

class bank {
	int principle, years;
	float rate, total;
public:
	bank() {}
	bank(int p, int y, int r) {
		principle = p;
		years = y;
		rate = r;
	}
	
	void show() {
		total = ((principle / 100) * (rate * years)) + principle;
		cout << "The principle amount was " << principle << " and the rate is " << rate << "% with " << years << " years. The total amount with interest is " << total << endl;
	}
	};

	int main() {
		int p, y, r;
		cout << "Enter principle, years and interest rate:" << endl;
		cin >> p >> y >> r;
		bank a(p,y,r);
		a.show();

		return 0;

	}