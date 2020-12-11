#include "span.hpp"
#include <string>
#include <iostream>
#include <vector>

int     main()
{
    std::cout << "*******************" << std::endl;
    std::cout << "********SPAN*******" << std::endl;
    std::cout << "*******************" << std::endl;
    std::cout << std::endl;
    std::cout << "-----Span of 5-----" << std::endl;
    Span span(5);
    try{
    span.addNumber(14);
    span.addNumber(-2);
    span.addNumber(21);
    span.addNumber(74);
    span.addNumber(98);
    span.addNumber(98);
    span.addNumber(98);
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    
    try{
    std::cout << "Shortestspan : " << span.shortestSpan() << std::endl;
    std::cout << "Longestspan : " << span.longestSpan() << std::endl;
    }catch(std::exception&e){
        std::cout << e.what() << std::endl;
    }

    std::cout << "-----Span of 1-----" << std::endl;
    Span span2(1);
    span2.addNumber(14);
    try{
        std::cout << "Shortestspan : " << span2.shortestSpan() << std::endl;
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try{
        std::cout << "Longestspan : " << span2.longestSpan() << std::endl;
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }

    std::cout << "-----Span of 2000-----" << std::endl;
    Span span3(2000);
    for (int i = 0; i < 2000; ++i)
        span3.addNumber(i);
    try{
        std::cout << "Shortestspan : " << span3.shortestSpan() << std::endl;
        std::cout << "Longestspan : " << span3.longestSpan() << std::endl;
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }

    std::cout << "-----Span of 2000 0-----" << std::endl;
    Span span4(2000);
    for (int i = 0; i < 2000; ++i)
        span4.addNumber(0);
    try{
        std::cout << "Shortestspan : " << span4.shortestSpan() << std::endl;
        std::cout << "Longestspan : " << span4.longestSpan() << std::endl;
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "*******************" << std::endl;
    std::cout << "******ITERATOR*****" << std::endl;
    std::cout << "*******************" << std::endl;
    std::cout << std::endl;

    std::vector<int> vector;
    for (int i = 0; i < 100; ++i)
        vector.push_back(i * 2);
    std::vector<int>::iterator begin = vector.begin();
    std::vector<int>::iterator end = vector.end();
    std::cout << "-----Span of 100-----" << std::endl;
    Span sp(100);
    sp.addRange(begin, end);
    std::cout << "Shortestspan : " << sp.shortestSpan() << std::endl;
    std::cout << "Longestspan : " << sp.longestSpan() << std::endl;
    return(0);
}