#include "deleter.hpp"
#include "object.hpp"

#include <iostream>

int main()
{
    try
    {
        Object* p = new Object;
        delete_object(p);
    }
    catch (const std::exception& ex)
    {
        std::cerr << "Caught exception \"" << ex.what() << "\"\n";
    }
	
    //std::system("pause");
}
