#include <iostream>

using namespace std;

int main()
{

    cout << "Search" << endl;
    cout << "View" << endl;
    cout << "Quit" << endl;

    cout << "Enter a Selection" << endl;

    int input;
    cin >> input;

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