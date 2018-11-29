#include "deleter.hpp"
#include "object.hpp"

#include "book.hpp"

#include <iostream>

int main()
{
    try
    {
        //Checked delete
        Object* p = new Object;
        delete_object(p);

        //Pimpl
        Book b;
        b.print();
    }
    catch (const std::exception& ex)
    {
        std::cerr << "Caught exception \"" << ex.what() << "\"\n";
    }
	
    //std::system("pause");
}
