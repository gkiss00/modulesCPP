#ifndef SPAN
#define SPAN

#include <iostream>
#include <string>
#include <vector>

class Span {
    protected:
        unsigned int max;
        std::vector<int> tab;
        Span();
    public:
        Span(unsigned int nb);
        Span(const Span &target);
        Span &operator=(Span &target);
        ~Span();
        void addNumber(int nb);
        int shortestSpan();
        int longestSpan();
};

#endif