#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <exception>
#include <iostream>

class Span {
private:
    std::vector<int> _data;
    unsigned int _N;
    Span();
public:
    Span(unsigned int N);
    Span(const Span &src);
    Span &operator=(const Span &src);
    ~Span();

    void addNumber(int number);
    void addNumbers(int count);
    int shortestSpan() const;
    int longestSpan() const;

    class SpanFullException : public std::exception {
        public:
            const char* what() const throw();
    };
    
    class SpanNotEnoughNumbersException : public std::exception {
        public:
            const char* what() const throw();
    };

    template <typename It>
    void addRange(It begin, It end) {
        if (std::distance(begin, end) + _data.size() > _N) {
            throw SpanFullException();
        }
        _data.insert(_data.end(), begin, end);
    }
};

#endif
