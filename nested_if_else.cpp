#include <iostream>
// Repetitve code huh
using namespace std;

int main()
{
    cout << "1. Add New Record." << endl;
    cout << "2. Delte Record." << endl;
    cout << "3. View Record." << endl;
    cout << "4. Search Record." << endl;
    cout << "5. Quit." << endl;

    cout << "Please enter your selection > " << flush;

    // User input
    int value;
    cin >> value;

    // Handle user input
    if (value == 1)
    {
        cout << "Are you sure you would like to add a new record?" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cout << "Please enter your choice > " << flush;
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            cout << "Record will be added!" << endl;
        }
        else
        {
            cout << "Record will NOT be added!" << endl;
        }
    }
    else if (value == 2)
    {
        cout << "Are you sure you would like to delete a  record?" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cout << "Please enter your choice > " << flush;
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            cout << "Record will be deleted!" << endl;
        }
        else
        {
            cout << "Record will NOT be deleted!" << endl;
        }
    }
    else if (value == 3)
    {
        cout << "Are you sure you would like view a record?" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cout << "Please enter your choice > " << flush;
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            cout << "Showing Record!" << endl;
        }
        else
        {
            cout << "Request ended!" << endl;
        }
    }
    else if (value == 4)
    {
        cout << "Are you sure you would search for a record?" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cout << "Please enter your choice > " << flush;
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            cout << "Searching for Record!" << endl;
        }
        else
        {
            cout << "Request ended!" << endl;
        }
    }
    else
    {
        cout << "Quitting Application" << endl;
    }
}