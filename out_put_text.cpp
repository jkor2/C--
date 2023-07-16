#include <iostream>
using namespace std;

int main()
{
    // Flush will output on the same line as next output
    cout << "Starting the program..." << flush;

    cout << "Hello" << endl;

    cout << "This"
         << " Is"
         << " Mutliple outputs"
         << " at once" << endl;

    cout << "More text output..." << endl;
}