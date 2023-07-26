#include <iostream>
#include "Cat.h"

using namespace std;

int main()
{

    // Restricting direct access to happy boolean through encapsulation
    //  Cat 1
    Cat jim;
    jim.makeHappy();
    jim.speak();

    // Cat 2
    Cat bob;
    jim.makeSad();
    bob.speak();
}