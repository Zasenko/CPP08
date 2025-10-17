#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <stdexcept>
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T &t, int i)
{
    typename T::iterator iter = std::find(t.begin(), t.end(), i);
    
    if (iter == t.end()) {
        throw std::logic_error("not found");
    }
    return iter;
}

#endif
