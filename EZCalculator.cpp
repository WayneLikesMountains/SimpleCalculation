// Wayne Conover

#include <iostream>
using namespace std;

// prototypes
bool testInput(int inInfo);

int main()
{
    cout << "Hello Planet" << endl; 
    
    // Calculation application
    int input;
    float result = 0;

    cout << "Use 1-4 to either: 1 add, 2 subtract, 3 multiply, 4 devide, 0 to quit";

    cin >> input;

    // test input
    while (!testInput(input)) {
        cout << "Incorrect input - - -" << endl;
        cout << "Use 1-4 to either: 1 add, 2 subtract, 3 multiply, 4 devide, 0 to quit";
        cin >> input;
    }    
    
    while (input != 0) {
        if (input == 1) {
            cout << "Enter 2 numbers to add as x y" << endl;
            cin >> num1 >> num2;
            cin.ignore();
            result = num1 + num2;
            cout << "Result is: " << result << endl;
        }

        if (input == 2) {
            cout << "Enter 2 numbers to subtract as x y" << endl;
            cin >> num1 >> num2;
            cin.ignore();
            result = num1 - num2;
            cout << "Result is: " << result << endl;
        }

        if (input == 3) {
            cout << "Enter 2 numbers to multiply as x y" << endl;
            cin >> num1 >> num2;
            cin.ignore();
            result = num1 * num2;
            cout << "Result is: " << result << endl;
        }

        if (input == 4) {
            cout << "Enter 2 numbers to devide as x y" << endl;
            cin >> num1 >> num2;
            cin.ignore();
            result = num1 / num2;
            cout << "Result is: " << result << endl;
        }

        cout << "Anything else?" << endl;
        cout << "Use 1-4 to either: 1 add, 2 subtract, 3 multiply, 4 devide, 0 to quit";
        cin >> input;
        while (!testInput(input)) {
            cout << "Incorrect input - - -" << endl;
            cout << "Use 1-4 to either: 1 add, 2 subtract, 3 multiply, 4 devide, 0 to quit";
            cin >> input;
        }
    }

    cout << "Application Ended.." << endl;
}

bool testInput(int inInfo) {
    if (inInfo >= 0 || inInfo <= 4) {
        return true;
    }
    else {
        return false;
    }
}
