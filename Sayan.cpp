#include <iostream>  // for input and output

using namespace std;

int main() {
    // Declare variables
    int number;

    // Ask user for input
    cout << "Enter a number: ";
    cin >> number;

    // Conditional statement
    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }

    // Loop from 1 to number
    cout << "Counting from 1 to " << number << ":" << endl;
    for (int i = 1; i <= number; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
