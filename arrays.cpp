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
}