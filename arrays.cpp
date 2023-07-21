#include <iostream>

using namespace std;

int main()
{
    int values[5] = {4, 2, 5, 3, 1};

    // Calculation of lenght of an array - - When the length is unknown
    for (int i = 0; i < sizeof(values) / sizeof(values[0]); i++)
    {
        cout << "At index " << i << " the value is " << values[i] << endl;
    }

    cout << endl
         << "#################" << endl;

    // Creating array with - - no values
    int values2[10] = {}; // By default, no value
    // loop through and assign values

    for (int i = 0; i < sizeof(values2) / sizeof(values[0]); i++)
    {
        values2[i] = i;

        cout << values[i] << endl;
    }
}