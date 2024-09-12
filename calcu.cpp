#include <iostream>
using namespace std;

int add(int x, int y) {
    return x + y;
}

int sub(int x, int y) {
    return x - y;
}

int divide(int x, int y) {
    if (y == 0) {
        cout << "Invalid! Not divisible by zero" << endl;
        return 0; // Return a default value 
    }
    else {
        return x / y;
    }
}

int multiply(int x, int y) {
    return x * y;
}

int main() {
    int sum;
    int num;
    char oper;
    cout << "This is a calculator.\n" << endl;

    cin >> sum;

    // Loop until an invalid operator is entered
    while (cin >> oper && (oper == '+' || oper == '-' || oper == '*' || oper == '/')) {
        cin >> num;
        switch (oper) {
        case '+':
            sum = add(sum, num);
            break;
        case '-':
            sum = sub(sum, num);
            break;
        case '*':
            sum = multiply(sum, num);
            break;
        case '/':
            sum = divide(sum, num);
            break;
        default:
            cout << "Invalid operator!" << endl;
            break;
        }
    }
    cout << "Your answer: " << sum << endl;

    return 0;
}
