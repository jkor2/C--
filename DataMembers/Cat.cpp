#include <iostream>
#include "Cat.h"

void Cat::speak()
{

    if (happy)
    {
        std::cout << "Meow";
    }
    else
    {
        std::cout << "Rawww";
    }
}