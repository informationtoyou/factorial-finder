#include <iostream>
using namespace std;

int factorialFinder(int x) {
    if (x == 1 || x == 0) {
        return 1;
    }
    else {
        return x * factorialFinder(x - 1);
    }
}

int main() {
    int number;

    cout << "Welcome to Factorial Finder!" << endl;
    cout << "Please enter a non-negative integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Error: Factorial of a negative number is undefined." << endl;
    }
    else {
        cout << "The factorial of " << number << " is: " << factorialFinder(number) << endl;
    }

    return 0;
}
