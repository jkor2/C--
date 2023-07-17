#include <iostream>

using namespace std;

int main()
{
    cout << "Enter your name: " << flush;

    // Only have to declare the variable
    // dont need to set it to an empty string
    string input;

    cin >> input;

    cout << "Hello " << input << endl;

    cout << "how old are you " << input << "? " << flush;

    int value;

    cin >> value;

    cout << "You are " << value << " years old." << endl;
}