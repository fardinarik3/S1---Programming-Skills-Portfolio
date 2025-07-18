// Brute Force Attack Simulation in C++
#include <iostream>
#include <string>
using namespace std;

int main() {
    string correctPassword = "12345";
    string userInput;
    int attempts = 0;
    const int maxAttempts = 5;

    while (attempts < maxAttempts) {
        cout << "Enter password: ";
        cin >> userInput;

        if (userInput == correctPassword) {
            cout << "Welcome to the Secure Area" << endl;
            break;
        } else {
            attempts++;
            if (attempts < maxAttempts) {
                cout << "Incorrect password. You have " << (maxAttempts - attempts) << " attempts left." << endl;
            } else {
                cout << "Too many failed attempts. The authorities have been alerted!" << endl;
            }
        }
    }
    return 0;
}
