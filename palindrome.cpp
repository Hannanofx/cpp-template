#include <iostream>
#include <string>
using namespace std;

bool palindrome() {
    string num;
    cout << "Enter a number:" << endl;
    cin >> num;

    int i = 0;
    int j = num.length() - 1;

    while (i<j) {
        if (num[i] != num[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    cout << (palindrome() ? "true" : "false") << endl;
    return 0;
}
