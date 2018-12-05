#pragma once

#include <iostream>
#include <new>

void handler()
{
    std::cout << "Memory allocation failed, terminating\n";
    std::set_new_handler(nullptr);
}
