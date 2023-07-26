// Person methods
#include <iostream>
#include "Person.h"

using namespace std;

void Person::greeting()
{
    if (name.empty())
    {
        cout << "Hello, please tell me your name!" << flush;
        string curr_name;
        cin >> curr_name;
        name = curr_name;
        cout << "Welcome " << name << " how are you?" << endl;
    }
    else
    {
        cout << "Welcome " << name << " how are you?" << endl;
    }

    cout << endl;
    cout << name << " how are you feeling?" << flush;
    cin >> mood;
    cout << endl;
    cout << "How many siblings do you have?" << flush;
    cin >> siblings;
};

void Person::privateData()
{
    cout << endl;
    cout << "This is what we got:" << endl;
    cout << "Siblings: " << siblings << endl;
    cout << "Mood: " << mood << endl;
    cout << "Name: " << name << endl;
}