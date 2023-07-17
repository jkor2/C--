#include <iostream>
#include <limits>

using namespace std;

int main()
{
    cout << "Interger Types" << endl;

    // Max integer
    cout << "max INT Value: " << INT_MAX << endl;

    // Min Integer
    cout << "min INT Value: " << INT_MIN << endl;

    // For an interger greater or less than MAX && MIN
    long long int value = 123456789987654321;
    cout << "Long INT Value: " << value << endl;

    // Short INT
    short int value_short = 12345;
    cout << value_short << endl;

    // Size of operator
    cout << "Size of intL " << sizeof(value) << endl;
}