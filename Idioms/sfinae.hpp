#pragma once

#include <vector>

template<typename Iter>
typename Iter::value_type mean(Iter first, Iter last)
{
    return Iter::value_type{};
}

template<typename T>
T mean(T*, T*)
{
    return T{};
}

void f(std::vector<int>& v, int* p, int n)
{
    auto x = mean(v.begin(), v.end()); // OK
    auto y = mean(p, p + n); // b³¹d
}
