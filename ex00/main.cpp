#include "easyfind.hpp"
#include <exception>
#include <iostream>

int main(void)
{

    try {
        std::vector<int> arr;
        arr.push_back(1);
        arr.push_back(2);
        arr.push_back(3);
        arr.push_back(4);
        arr.push_back(5);
        std::vector<int>::iterator it = easyfind(arr, 100);
        std::cout << "Result: " << *it << std::endl;
    } catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    
    try {
        std::vector<int> arr;
        std::vector<int>::iterator it = easyfind(arr, 100);
        std::cout << "Result: " << *it << std::endl;
    } catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    try {
        std::vector<int> arr;
        arr.push_back(1);
        arr.push_back(2);
        arr.push_back(3);
        arr.push_back(4);
        std::vector<int>::iterator it = easyfind(arr, 3);
        std::cout << "Result: " << *it << std::endl;
    } catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    try {
        std::list<int> arr;
        arr.push_back(1);
        arr.push_back(2);
        arr.push_back(3);
        arr.push_back(4);
        std::list<int>::iterator it = easyfind(arr, 3);
        std::cout << "Result: " << *it << std::endl;
    } catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    try {
        std::list<int> arr;
        arr.push_back(1);
        arr.push_back(2);
        arr.push_back(3);
        arr.push_back(4);
        std::list<int>::iterator it = easyfind(arr, 100);
        std::cout << "Result: " << *it << std::endl;
    } catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    try {
        std::list<int> arr;
        std::list<int>::iterator it = easyfind(arr, 100);
        std::cout << "Result: " << *it << std::endl;
    } catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}
