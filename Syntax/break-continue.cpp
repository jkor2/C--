#include <iostream>

using namespace std;

int main()
{
    cout << "Starting Program" << endl;
    /*
        for (int i = 0; i < 5; i++)
        {
            cout << "i is " << i << endl;

            if (i == 3)
            {
                // Once I == 3, break and quit the loop
                break;
            }
            else
            {
                // Dont need technically need this -
                // However, for practice adding
                continue;
            }
        }
        */
    const string password = "HelloWorld";
    string input;
    do
    {
        cout << "Enter the password > " << flush;
        cin >> input;

        if (input == password)
        {
            break; // <- Input is correct break
        }
        else
        {
            continue; // <- Input is incorrect continue
        }
    } while (true); // <- Setting true, no way to set false = infinite loop
}