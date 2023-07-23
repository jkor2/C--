// Return values in cpp

#include <iostream>

using namespace std;

void showMenu()
{
    cout << "1. Search" << endl;
    cout << "2. View Record" << endl;
    cout << "3. Quit" << endl;
    cout << "Enter Selction > " << endl;
}

int processSelection()
{
    int input;
    cin >> input;
    return input;
}

int main()
{
    showMenu();
    int input = processSelection();

    switch (input)
    {
    case 1:
        cout << "Searching...." << endl;
        break;
    case 2:
        cout << "Viewing..." << endl;
        break;
        ;
    case 3:
        cout << "Quitting..." << endl;

    default:
        cout << "Please select and item from the menu" << endl;
    }
}