#include<iostream>
#include<string>
using namespace std;

class binary {
public:
	string num;
	void input() {
		cout << "Enter a number :" << endl;
		cin >> num;
	}
	void process() {
		for (int i = 0; i <= num.length(); i++) {
			if (num[i] == '1') {
				num[i] = '0';    // 1 to 0
			}
			else if(num[i] == '0') {
				num[i] = '1';      // 0 to 1
			}
			else{
				cout << "Errorrrr" << endl;
				break;
			}
		}

	}
	void output() {
		cout << "Answer:" << num << endl;
	}
};

int main() {
	binary a;
	a.input();
	a.process();
	a.output();
	return 0;
}