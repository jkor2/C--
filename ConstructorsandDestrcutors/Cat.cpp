#include <iostream>
#include "Cat.h"

void Cat::speak()
{

    if (happy)
    {
        std::cout << "Meow" << std::endl;
    }
    else
    {
        std::cout << "Raw" << std::endl;
    }
}