#include "Span.hpp"
#include <iostream>

int main() {
    std::srand(time(0));
    
    std::cout << "--------- Inits ---------" << std::endl;
    try {
        Span sp(5);
        sp.addNumber(1);
        sp.addNumber(2);
        sp.addNumber(4);
        int shortest = sp.shortestSpan();
        int longest = sp.longestSpan();
        std::cout << "Shortest span: " << shortest << std::endl;
        std::cout << "Longest span: " << longest << std::endl;

        Span spCopy(sp);
        int shortestCopy = spCopy.shortestSpan();
        int longestCopy = spCopy.longestSpan();
        std::cout << "Shortest Copy span: " << shortestCopy << std::endl;
        std::cout << "Longest Copy span: " << longestCopy << std::endl;

        Span spAs = sp;
        int shortestAs = spAs.shortestSpan();
        int longestAs = spAs.longestSpan();
        std::cout << "Shortest As span: " << shortestAs << std::endl;
        std::cout << "Longest As span: " << longestAs << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "--------- Ok ---------" << std::endl;
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
    
    std::cout << "--------- Error (Empty Span) ---------" << std::endl;
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

    std::cout << "--------- Error (Span with only 1 value) ---------" << std::endl;
    try {
        Span sp(10);
        sp.addNumber(6);
        int shortest = sp.shortestSpan();
        int longest = sp.longestSpan();
        std::cout << "Shortest span: " << shortest << std::endl;
        std::cout << "Longest span: " << longest << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "-------- Error (not enought space in Span) ----------" << std::endl;
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

    std::cout << "--------- 10000 (Ok) ---------" << std::endl;
    try {

        std::vector<int> numbers;
        for (int i = 0; i < 10000; i++) {
            numbers.push_back(rand());
        }
           
        Span big(10000); 
        big.addRange(numbers.begin(), numbers.end());

        int shortest = big.shortestSpan();
        int longest = big.longestSpan();
        std::cout << "Shortest span: " << shortest << std::endl;
        std::cout << "Longest span: " << longest << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "--------- 30000 (OK)---------" << std::endl;
    try {
        Span big(30000);
        big.addNumbers(30000);
        int shortest = big.shortestSpan();
        int longest = big.longestSpan();
        std::cout << "Shortest span: " << shortest << std::endl;
        std::cout << "Longest span: " << longest << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "-------- addRange Error (not enought space in Span) ----------" << std::endl;
    try {
        std::vector<int> a;
        for (size_t i = 0; i < 101; i++) {
            a.push_back(i);
        }
        
        Span sp = Span(100);
        sp.addRange(a.begin(), a.end());
    }
    catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "--------- addNumbers Error (not enought space in Span) ---------" << std::endl;
    try {
        Span big(100);
        big.addNumbers(101);
    }
    catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
