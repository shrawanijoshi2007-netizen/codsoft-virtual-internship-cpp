#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    int choice;

    cout << "Simple Calculator\n";
    cout << "-----------------\n";

    // Input numbers
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Menu
    cout << "\nChoose an operation:\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // Perform operation
    switch(choice) {
        case 1:
            cout << "Result = " << num1 + num2;
            break;

        case 2:
            cout << "Result = " << num1 - num2;
            break;

        case 3:
            cout << "Result = " << num1 * num2;
            break;

        case 4:
            if(num2 != 0)
                cout << "Result = " << num1 / num2;
            else
                cout << "Error! Division by zero is not allowed.";
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}