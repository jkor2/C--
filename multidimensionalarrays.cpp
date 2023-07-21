#include <iostream>

using namespace std;

int main()
{
    string animals[2][3] = {{"Dog", "Cat", "Bird"}, {"Whale", "Shark", "Tuna"}};

    for (int i = 0; i < sizeof(animals) / sizeof(animals[0]); i++)
    {
        cout << "Looping the first dimension" << endl;

        for (int j = 0; j < sizeof(animals[0]) / sizeof(animals[i][0]); j++)
        {
            cout << "Looping the second dimension: " << animals[i][j] << endl;
        }
    }
}