#pragma once

#include <iostream>

struct Object
{
    Object()
    {
        std::cout << "Object" << std::endl;
    }

    // this user-defined destructor won't be called when delete
    // is called on a partially-defined (i.e., predeclared) Object
    ~Object()
    {
        // ...
        std::cout << "~Object" << std::endl;
    }
};
