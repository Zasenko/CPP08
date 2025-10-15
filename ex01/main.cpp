#include "Span.hpp"
#include <iostream>

int main() {
    std::cout << "--------!!!!!----------" << std::endl;

    try {
        std::vector<int> a;

        for (size_t i = 0; i < 2; i++)
        {
            a.push_back(i);
        }
        
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);

        sp.addRange(a.begin(), a.end());

        std::cout << "--------- 444444444  ---------" << std::endl;


        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

        std::cout << "--------!!!!!twetwerewrwer ----------" << std::endl;

    try {
        
        std::vector<int> a;
        for (size_t i = 0; i < 1; i++)
        {
            a.push_back(i);
        }

        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);

        sp.addRange(a.begin(), a.end());

        std::cout << "--------- 444444444  ---------" << std::endl;


        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "------------------" << std::endl;
    try {
        Span sp(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        int shortest = sp.shortestSpan();
        int longest = sp.longestSpan();
        std::cout << "Shortest span: " << shortest << std::endl;
        std::cout << "Longest span: " << longest << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << "---------  Error  ---------" << std::endl;

    try {
        Span sp(10);
        int shortest = sp.shortestSpan();
        int longest = sp.longestSpan();
        std::cout << "Shortest span: " << shortest << std::endl;
        std::cout << "Longest span: " << longest << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << "------------------" << std::endl;

    try {
        Span sp(2);
        sp.addNumber(6);
        sp.addNumber(3);
        int shortest = sp.shortestSpan();
        int longest = sp.longestSpan();
        std::cout << "Shortest span: " << shortest << std::endl;
        std::cout << "Longest span: " << longest << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << "-------- Error ----------" << std::endl;
    try {
        Span sp(2);
        sp.addNumber(1);
        sp.addNumber(2);
        sp.addNumber(3);
        int shortest = sp.shortestSpan();
        int longest = sp.longestSpan();
        std::cout << "Shortest span: " << shortest << std::endl;
        std::cout << "Longest span: " << longest << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

std::cout << "--------- 10000 ---------" << std::endl;
    try {
        Span big(10000);

        std::vector<int> numbers;
        for (int i = 0; i < 10000; i++)
            numbers.push_back(rand());
            
        big.addRange(numbers.begin(), numbers.end());

        int shortest = big.shortestSpan();
        int longest = big.longestSpan();
        std::cout << "Shortest span: " << shortest << std::endl;
        std::cout << "Longest span: " << longest << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "--------- 30000 ---------" << std::endl;
    try {
        Span big(30000);

        std::vector<int> numbers;
        for (int i = 0; i < 30000; i++)
            numbers.push_back(rand());

        big.addRange(numbers.begin(), numbers.end());

        int shortest = big.shortestSpan();
        int longest = big.longestSpan();
        std::cout << "Shortest span: " << shortest << std::endl;
        std::cout << "Longest span: " << longest << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

