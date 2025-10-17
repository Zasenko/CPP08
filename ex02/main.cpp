#include "MutantStack.hpp"
#include <iostream>

int main() {
   
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;

    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int> s(mstack);


    std::cout << "--------- my tests: ---------" << std::endl;

    std::cout << "mstack top: " << mstack.top() << std::endl;
    std::cout << "mstack size: " <<  mstack.size() << std::endl;

    MutantStack<int> mstackCopy(mstack);
    std::cout << "copy top: " <<  mstack.top() << std::endl;
    std::cout << "copy size: " <<  mstack.size() << std::endl;

    MutantStack<int> mstackAs = mstack;
    std::cout << "as top: " <<  mstackAs.top() << std::endl;
    std::cout << "as size: " <<  mstackAs.size() << std::endl;


    MutantStack<int> emptyStack;
    std::cout << "emptyStack size: " <<  emptyStack.size() << std::endl;
    if (!emptyStack.empty()) {
        std::cout << "emptyStack top: " <<  emptyStack.top() << std::endl;
    }
    if (!emptyStack.empty()) {
        std::cout << "pop from emptyStack: " <<  emptyStack.top() << std::endl;
        emptyStack.pop();
    }
    if (!emptyStack.empty()) {
        std::cout << "emptyStack top: " <<  emptyStack.top() << std::endl;
    }
    emptyStack.push(666);
    if (!emptyStack.empty()) {
        std::cout << "emptyStack top: " <<  emptyStack.top() << std::endl;
    }
    if (!emptyStack.empty()) {
        std::cout << "pop from emptyStack: " <<  emptyStack.top() << std::endl;
        emptyStack.pop();
    }


    return 0;
}

// #include <list>
// int main() {
    
//     std::list<int> mstack;

//     mstack.push_back(5);
//     mstack.push_back(17);

//     std::cout << mstack.back() << std::endl;

//     mstack.pop_back();

//     std::cout << mstack.size() << std::endl;

//     mstack.push_back(3);
//     mstack.push_back(5);
//     mstack.push_back(737);
//     mstack.push_back(0);

//     std::list<int>::iterator it = mstack.begin();
//     std::list<int>::iterator ite = mstack.end();

//     ++it;
//     --it;

//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }

//     return 0;
// }
