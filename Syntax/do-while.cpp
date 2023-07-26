// I already know this loop -- just for addtional practice
#include <iostream>

using namespace std;

int main()
{
    // Guess the password
    const string password = "HelloWorld";
    string password_guess;

    do
    {
        cout << "Guess the password > " << flush;
        cin >> password_guess;
    } while (password_guess != password);
    {
        cout << "Correct!" << endl;
    }

    int value = 20;

    do
    {
        value--;
        cout << "Hello World x Spam";
    } while (value != 0);
    {
        cout << "Complete" << endl;
    }
}