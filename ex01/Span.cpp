#include "Span.hpp"

Span::Span(unsigned int N)
{
    _data.reserve(N);
    _N = N;
}

Span::Span(const Span &other) : _data(other._data), _N(other._N) {}

Span &Span::operator=(const Span &other) {
    if (this != &other) {
        _N = other._N;
        _data = other._data;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int number) {
    if (_data.size() >= _N) {
        throw SpanFullException();
    }
    _data.push_back(number);
}

int Span::shortestSpan() const {
    if (_data.size() < 2) {
        throw SpanNotEnoughNumbersException();
    }

    std::vector<int> copy(_data);
    std::sort(copy.begin(), copy.end());

    int minDiff = copy[1] - copy[0];
    for (size_t i = 1; i < copy.size(); ++i) {
        int diff = copy[i] - copy[i - 1];
        if (diff < minDiff) {
            minDiff = diff;
        }
    }
    return minDiff;
}

int Span::longestSpan() const {
    if (_data.size() < 2) {
        throw SpanNotEnoughNumbersException();
    }

    int minVal = *std::min_element(_data.begin(), _data.end());
    int maxVal = *std::max_element(_data.begin(), _data.end());
    return maxVal - minVal;
}

const char* Span::SpanFullException::what() const throw() {
    return "Span is full, cannot add more numbers";
}

const char* Span::SpanNotEnoughNumbersException::what() const throw() {
    return "Not enough numbers to find a span";
}
