#include <iostream>
#include <string>
#include <limits> 

using namespace std;

int main() {
    string name;
    string hometown;
    int age;

    
    cout << "Enter your full name: ";
    getline(cin, name);  

    cout << "Enter your hometown: ";
    getline(cin, hometown);  

    cout << "Enter your age: ";
    while (!(cin >> age)) {
        cout << "Invalid input. Please enter a number for age: ";
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    }

    
    cout << "Name: " << name << "\nHometown: " << hometown << "\nAge: " << age << endl;

    return 0;
}
