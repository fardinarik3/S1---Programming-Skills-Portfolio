#include <iostream>
#include <string>
#include <limits> // for input validation

using namespace std;

int main() {
    string name;
    string hometown;
    int age;

    // Ask for user input
    cout << "Enter your full name: ";
    getline(cin, name);  // Allows full name with spaces

    cout << "Enter your hometown: ";
    getline(cin, hometown);  // Allows towns with spaces

    cout << "Enter your age: ";
    while (!(cin >> age)) {
        cout << "Invalid input. Please enter a number for age: ";
        cin.clear(); // clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
    }

    // Final output with a single cout
    cout << "Name: " << name << "\nHometown: " << hometown << "\nAge: " << age << endl;

    return 0;
}
