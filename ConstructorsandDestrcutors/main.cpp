#include <iostream>
#include "Cat.h"

int main()
{
    std::cout << "Starting Program" << std::endl;

    { // Changing the scope - dealloacting memory
        Cat bob;
        bob.speak();
    }

    std::cout << "Ending Program" << std::endl;
}