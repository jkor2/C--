#include <iostream>
#include "Cat.h"

using namespace std;

int main()
{
    // Cat 1
    Cat jim;

    jim.happy = true;
    jim.speak();

    // Cat 2
    Cat bob;
    bob.happy = false;
    bob.speak();
}