#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Select operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << (num1+num2) << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << (num1-num2) << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << (num1*num2) << endl;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << (num1/num2) << endl;
            break;
        default:
            cout << "Invalid operation." << endl;
            break;
    }//end of switch

    return 0;
}//end of main
