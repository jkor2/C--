#include <iostream>
using namespace std;

int main()
{
    cout << "Starting porgram..." << endl;

    string value = "Hello, this is a string!";
    string value2 = "This is the second string";
    cout << "First string: " << value << endl;
    cout << "Second string: " << value2 << endl;

    // concat string
    cout << "Concat strings: " << value + " " + value2 << endl;
}