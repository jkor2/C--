#include <iostream>

using namespace std;

int main()
{
    cout << "Starting program...." << endl;

    string password = "HelloWorld";

    cout << "Please enter your password" << flush;

    string user_input;

    cin >> user_input;

    if (user_input == password)
    {
        cout << "Correct - You may enter!";
    }
    else
    {
        cout << "Passwords do not match";
    }
}