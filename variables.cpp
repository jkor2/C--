#include <iostream>
using namespace std;

int main()
{
    // Storing an integer
    int numberOfSomething = 4;
    int totalNumberOfAnimals = 9;
    cout << "Number of Dogs " << numberOfSomething << endl;
    cout << "I have " << totalNumberOfAnimals - numberOfSomething << " animals that are not dogs" << endl;

    // Reasing varibale names
    cout << "You have another animal!" << endl;

    numberOfSomething = numberOfSomething + 1;

    cout << "You now have " << numberOfSomething << " dogs." << endl;
}