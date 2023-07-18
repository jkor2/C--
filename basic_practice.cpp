#include <iostream>

using namespace std;

int main()
{

    // Presenting options
    cout << "Welcome, what kind of math would you like to do?" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Square Root" << endl;

    // User input - flush to keep on same line
    cout << "Please choose > " << flush;
    int choice;
    cin >> choice;

    // Handling user selection
    if (choice == 1)
    {
        cout << "You have selected addition." << endl;
    }
    else if (choice == 2)
    {
        cout << "You have selected subtraction." << endl;
    }
    else if (choice == 3)
    {
        cout << "You have selected multiplication" << endl;
    }
    else if (choice == 4)
    {
        cout << "You have selected division" << endl;
    }
    else if (choice == 5)
    {
        cout << "You have selected square root" << endl;
    }
    else
    {
        cout << "Qutting application - Invalid selection." << endl;
    }
}