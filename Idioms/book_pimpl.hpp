#pragma once

#include "book.hpp"

#include <iostream>

class Book::BookImpl
{
public:
    BookImpl();
    ~BookImpl();

    void print();

private:
    std::string  m_Contents;
    std::string  m_Title;
    std::string  m_ISBN; //after add this member only book.cpp is recompile
};
