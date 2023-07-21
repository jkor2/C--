// Basically same as if, else if, & else.
#include <iostream>

using namespace std;

int main()
{
    int value = 6;

    switch (value)
    {
    case 1:
        cout << "Value is 1" << endl;
        break;
    case 2:
        cout << "value is 2" << endl;
        break;
    case 3:
        cout << "Value is 3" << endl;
        break;
    case 4:
        cout << "Value is 4" << endl;
        break;
    case 5:
        cout << "Value is 5" << endl;
        break;
    default: // Default if value is not given.
        cout << "Value given is not compatibale" << endl;
        break;
    }
}