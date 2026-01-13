#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter a number (1–12) to choose a month:" << endl;
    cin >> choice;
    // using cin to enter our choice and swift to swap case choices

    switch (choice) {
        case 1:
            cout << "January has 31 days" << endl;
            break;
        case 2:
            cout << "February has 28 days" << endl;
            break;
        case 3:
            cout << "March has 31 days" << endl;
            break;
        case 4:
            cout << "April has 30 days" << endl;
            break;
        case 5:
            cout << "May has 31 days" << endl;
            break;
        case 6:
            cout << "June has 30 days" << endl;
            break;
        case 7:
            cout << "July has 31 days" << endl;
            break;
        case 8:
            cout << "August has 31 days" << endl;
            break;
        case 9:
            cout << "September has 30 days" << endl;
            break;
        case 10:
            cout << "October has 31 days" << endl;
            break;
        case 11:
            cout << "November has 30 days" << endl;
            break;
        case 12:
            cout << "December has 31 days" << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number from 1 to 12." << endl;
    }

    return 0;
}