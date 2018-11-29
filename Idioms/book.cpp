#include "book.hpp"
#include "book_pimpl.hpp"

Book::Book() : m_p(new BookImpl())
{
    std::cout << "Book" << std::endl;
}

Book::~Book()
{
    std::cout << "~Book" << std::endl;
    delete m_p;
}

void Book::print()
{
    m_p->print();
}

/* then BookImpl functions */

Book::BookImpl::BookImpl()
{
    std::cout << "BookImpl" << std::endl;
}

Book::BookImpl::~BookImpl()
{
    std::cout << "~BookImpl" << std::endl;
}

void Book::BookImpl::print()
{
    std::cout << "print from BookImpl" << std::endl;
}
