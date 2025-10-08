#include "easyfind.hpp"

#include <exception>
#include <iostream>

int main(void)
{
    std::vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

    try {
        // std::array::iterat or<int> = easyfind(arr, 2);
        std::cout << "Result: " << *easyfind(arr, 100) << std::endl;
    } catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}
