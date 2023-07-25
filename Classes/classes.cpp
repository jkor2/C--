// g++ *.cpp to build all files at once

#include <iostream>
#include "Cat.h"

using namespace std;

int main()
{

    // Cat class assgined to variable cat_var
    Cat cat_var;

    // Calling the functions within the Cat class
    cat_var.jump();
    cat_var.speak();
    cat_var.purr();
}