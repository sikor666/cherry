#pragma once

#include <iostream>

struct Base
{
   virtual void f()
   {
       std::cout << "base\n";
   }
};

struct Derived : Base
{
    void f() override // 'override' is optional
    {
        std::cout << "derived\n";
    }
};

class B {
    virtual void do_f() // private member
    {
        std::cout << "B::do_f\n";
    }

public:
    void f() { do_f(); } // public interface
};

struct D : public B {
    void do_f() override // overrides B::do_f
    {
        std::cout << "D::do_f\n";
    }
};
