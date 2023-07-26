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

    cout << "Lets do some addition" << endl;

    cout << "Enter the first number you would like to add: " << flush;

    int number1;

    cin >> number1;

    cout << "Enter the second number: " << flush;

    int number2;

    cin >> number2;

    cout << "This eqaula: " << number1 + number2 << endl;
}