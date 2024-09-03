#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printDivisors(int num) {
    vector<int> divisors;

    // Find divisors and add them to the vector
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            divisors.push_back(i);
        }
    }

    // Sort the divisors in decreasing order
    sort(divisors.rbegin(), divisors.rend());

    // Print the divisors
    for (int divisor : divisors) {
        cout << divisor << endl;
    }
}

int main() {
    cout << "This program is designed to exhibit the positive divisors of positive integers supplied by you." << endl;
    cout << "The program will repeatedly prompt you to enter a positive integer." << endl;
    cout << "Each time you enter a positive integer, the program will print all the divisors of your integer in a column and in decreasing order." << endl;

    while (true) {
        int num;
        cout << "Please enter a positive integer: ";
        cin >> num;

        // Check if the input is positive
        while (num <= 0) {
            cout << num << " is not a positive integer." << endl;
            cout << "Please enter a positive integer: ";
            cin >> num;
        }

        // Print divisors
        printDivisors(num);

        // Ask user if they want to continue
        char choice;
        cout << "Would you like to see the divisors of another integer (Y/N)? ";
        cin >> choice;

        // Check for valid response
        while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
            cout << "Please respond with Y (or y) for yes and N (or n) for no." << endl;
            cout << "Would you like to see the divisors of another integer (Y/N)? ";
            cin >> choice;
        }

        // Exit loop if the user chooses 'N' or 'n'
        if (choice == 'N' || choice == 'n') {
            break;
        }
    }

    return 0;
}
