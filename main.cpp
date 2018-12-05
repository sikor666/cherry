#include "deleter.hpp"
#include "object.hpp"
#include "book.hpp"
#include "virtual.hpp"
#include "memory.hpp"
#include "square.hpp"

#include <iostream>

/*void func(int x)
{
    std::cout << "Inside thread " << x << std::endl;
}*/

int main()
{
    try
    {
        //Checked delete
        //Object* p = new Object;
        //delete_object(p);

        //Pimpl
        //Book book;
        //book.print();

        //Virtual
        //Base b;
        //Derived d;

        // virtual function call through reference
        //Base& br = b; // the type of br is Base&
        //Base& dr = d; // the type of dr is Base& as  well
        //br.f(); // prints "base"
        //dr.f(); // prints "derived"

        // virtual function call through pointer
        //Base* bp = &b; // the type of bp is Base*
        //Base* dp = &d; // the type of dp is Base* as  well
        //bp->f(); // prints "base"
        //dp->f(); // prints "derived"

        // non-virtual function call
        //br.Base::f(); // prints "base"
        //dr.Base::f(); // prints "base"

        //D dd;
        //B* bbp = &dd;
        //bbp->f(); // internally calls D::do_f();

        //Threads
        calcSquare();

        //Memory
        //std::set_new_handler(handler);
        /*while (true)
        {
            new int[100000000ul];
        }*/
    }
    catch (const std::exception& ex)
    {
        std::cerr << "Caught exception \"" << ex.what() << "\"\n";
    }
	
    //std::system("pause");
}
