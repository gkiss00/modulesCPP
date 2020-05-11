#include "span.hpp"
#include <string>
#include <iostream>
#include <vector>

int     main()
{
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


    Span span2(1);
    try{
    span2.addNumber(14);
    std::cout << "Shortestspan : " << span2.shortestSpan() << std::endl;
    std::cout << "Longestspan : " << span2.longestSpan() << std::endl;
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return(0);
}