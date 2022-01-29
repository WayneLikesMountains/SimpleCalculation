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
    
    if (input != 0) {

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
