#pragma once

#include <thread>
#include <vector>
#include <iostream>
#include <mutex>
#include <atomic>

//std::atomic<int> accum(0);
/*void square(int x)
{
    accum += x * x;

    std::cout << std::this_thread::get_id() << " ";
}*/

int accum = 0;
std::mutex accum_mutex;
void square(int x)
{
    int temp = x * x;
    accum_mutex.lock();
    accum += temp;
    std::cout << std::this_thread::get_id() << " ";
    accum_mutex.unlock();
}

int calcSquare()
{
    std::vector<std::thread> ths;
    
    for (int i = 1; i <= 20; i++)
    {
        ths.push_back(std::thread(&square, i));
    }

    for (auto& th : ths)
    {
        th.join();
    }

    std::cout << "accum = " << accum << std::endl;

    return 0;
}
