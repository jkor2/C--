#include <iostream>
#include "Cat.h"

// Cat constrcutor
// Will run when object it created in main.cpp
Cat::Cat()
{
    std::cout << "Cat Created" << std::endl;
    happy = true;
}

// Cat Destrcutor
// Will run when scope ends
Cat::~Cat()
{
    std::cout << "Cat Destroyed" << std::endl;
}

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