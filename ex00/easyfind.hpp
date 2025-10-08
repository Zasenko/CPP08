#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <stdexcept>
#include <algorithm>
#include <vector>

template<typename T>
typename T::iterator easyfind(T &t, int i)
{
    // if (i <= 0){
    //     throw std::invalid_argument("i <= 0");
    // }
    // if (t.size() < static_cast<unsigned long>(i))
    // {
    //     throw std::range_error("t.size() < i");
    // }
    // if (t.size() == 0)
    // {
    //     throw std::length_error("container is empty");
    // }
    typename T::iterator iter;
    
    iter = std::find(t.begin(), t.end(), i);
    if (iter == t.end())
    {
        throw std::logic_error("not found");
    }
    return iter;
}

#endif
