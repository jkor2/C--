#include <iostream>
// Included for square root
#include <cmath>

using namespace std;

int main()
{
    int choice;
    do

    {

        // Presenting options
        cout << "Welcome, what kind of math would you like to do?" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Square Root" << endl;
        cout << "6. Quit Application" << endl;

        // User input - flush to keep on same line
        cout << "Please choose > " << flush;
        cin >> choice;

        // Handling user selection
        if (choice == 1)
        {
            cout << "You have selected addition." << endl;
            cout << "Please select the first number > " << flush;
            int value1;
            cin >> value1;
            cout << "Please select the second number > " << flush;
            int value2;
            cin >> value2;

            // Result
            cout << value1 + value2 << endl;
        }
        else if (choice == 2)
        {
            cout << "You have selected subtraction." << endl;
            cout << "Please select the first number > " << flush;
            int value1;
            cin >> value1;
            cout << "Please select the second number > " << flush;
            int value2;
            cin >> value2;

            // Result
            cout << value1 - value2 << endl;
        }
        else if (choice == 3)
        {
            cout << "You have selected multiplication" << endl;
            cout << "Please select the first number > " << flush;
            int value1;
            cin >> value1;
            cout << "Please select the second number > " << flush;
            int value2;
            cin >> value2;

            // Result
            cout << value1 * value2 << endl;
        }
        else if (choice == 4)
        {
            cout << "You have selected division" << endl;
            cout << "Please select the first number > " << flush;
            int value1;
            cin >> value1;
            cout << "Please select the second number > " << flush;
            int value2;
            cin >> value2;

            // Result
            cout << value1 / value2 << endl;
        }
        else if (choice == 5)
        {
            cout << "You have selected square root" << endl;
            cout << "Please select the value number > " << flush;
            int value1;
            cin >> value1;
            // Result
            cout << sqrt(value1) << endl;
        }
        else
        {
            cout << "Qutting application - Enjoy your day!" << endl;
        }
    } while (choice < 6);
}