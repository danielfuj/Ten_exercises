#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    string correctPassword = "12345"; // declaring variable types and values
    int attempts = 0;
    int totalAttempts = 5;
    //using cin to get the password as input and while looping of attempts
    while (attempts < totalAttempts) {
        cout << "Enter password: ";
        cin >> password;

        if (password == correctPassword) {
            cout << "Welcome to the Secure Area!" << endl;
            break;
        } else {
            attempts++;
            int remaining = totalAttempts - attempts;
            if (remaining > 0) {
                cout << "Incorrect password " << remaining << " attempts remaining." << endl;
            } else {
                cout << "Too many failed attempts. The authorities have been alerted!" << endl;
            }
        }
    }

    return 0;
}