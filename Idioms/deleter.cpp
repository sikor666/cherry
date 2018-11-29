#include "deleter.hpp"
#include "object.hpp"

#include <boost/checked_delete.hpp>

// Deletes an Object without knowing its definition
void delete_object(Object* p)
{
    //delete p; //missing destructor call without #include "object.hpp"

    boost::checked_delete<Object>(p); //compile error without #include "object.hpp"
}
