#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack(): std::stack<T>()
{}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy): std::stack<T>(copy)
{}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &src)
{
    if (this != &src)
    {
        std::stack<T>::operator=(src);
    }
    return *this;
}

template<typename T>
MutantStack<T>::~MutantStack()
{}

#endif
