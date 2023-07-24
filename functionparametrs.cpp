#include <iostream>

using namespace std;

void showMenu()
{
    cout << "1. Search" << endl;
    cout << "2. View Record" << endl;
    cout << "3. Quitting" << endl;
    cout << endl;
    cout << "Enter Selection" << endl;
}

int getInput()
{

    int input;
    cin >> input;
    return input;
}

void processSelection(int input) // Have to add type / variable in arg
{
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

int main()
{

    showMenu();
    int input = getInput();
    processSelection(input);
}