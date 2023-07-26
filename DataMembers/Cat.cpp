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
};

void Cat::makeHappy()
{
    happy = true;
};

void Cat::makeSad()
{
    happy = false;
}
