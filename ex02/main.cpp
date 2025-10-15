#include "MutantStack.hpp"
#include <iostream>

int main() {
    
    MutantStack<int> mstack;
    std::cout << mstack.top() << std::endl;
    std::cout << mstack.size() << std::endl;
    std::cout << "--------" << std::endl;

    mstack.push(5);
    std::cout << mstack.top() << std::endl;
    std::cout << mstack.size() << std::endl;
    std::cout << "--------" << std::endl;

    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    std::cout << mstack.size() << std::endl;
    std::cout << "--------" << std::endl;

    mstack.pop();
    std::cout << mstack.top() << std::endl;
    std::cout << mstack.size() << std::endl;
    std::cout << "--------" << std::endl;

    return 0;
}

