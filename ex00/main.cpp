#include "easyfind.hpp"
#include <exception>
#include <iostream>
#include <list>
#include <deque>
#include <vector>

int main(void)
{

    std::cout << "--- found (vector) ---" << std::endl;
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

    std::cout << std::endl << "--- found (list) ---" << std::endl;
    try {
        std::list<int> arr;
        arr.push_back(1);
        arr.push_back(47);
        arr.push_back(3);
        arr.push_back(11);
        std::list<int>::iterator it = easyfind(arr, 47);
        std::cout << "Result: " << *it << std::endl;
    } catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    std::cout << std::endl << "--- found (deque) ---" << std::endl;
    try {
        std::deque<int> arr;
        arr.push_back(1);
        arr.push_back(2);
        arr.push_back(900);
        arr.push_back(4);
        std::deque<int>::iterator it = easyfind(arr, 900);
        std::cout << "Result: " << *it << std::endl;
    } catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    std::cout << std::endl << "--- not found (vector) ---" << std::endl;
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

    std::cout << "--- not found (list) ---" << std::endl;
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

    std::cout << std::endl << "--- not found (deque) ---" << std::endl;
    try {
        std::deque<int> arr;
        arr.push_back(1);
        arr.push_back(2);
        arr.push_back(3);
        arr.push_back(4);
        std::deque<int>::iterator it = easyfind(arr, 100);
        std::cout << "Result: " << *it << std::endl;
    } catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    
    std::cout << std::endl << "--- not found (empty vector) ---" << std::endl;
    try {
        std::vector<int> arr;
        std::vector<int>::iterator it = easyfind(arr, 100);
        std::cout << "Result: " << *it << std::endl;
    } catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    
    std::cout << std::endl << "--- not found (empty list) ---" << std::endl;
    try {
        std::list<int> arr;
        std::list<int>::iterator it = easyfind(arr, 100);
        std::cout << "Result: " << *it << std::endl;
    } catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}
