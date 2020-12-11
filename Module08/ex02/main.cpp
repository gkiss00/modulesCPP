#include "mutantstack.hpp"
#include <string>
#include <iostream>
#include <stack>
#include <list>
#include <thread>
#include <unistd.h>

int main()
{
    std::cout << "*******************" << std::endl;
    std::cout << "*   MUTANTSTACK   *" << std::endl;
    std::cout << "*******************" << std::endl;
    std::cout << std::endl;

    MutantStack<int> ms;
    for (int i = 0; i < 10; ++i)
        ms.push(i + 1);
    std::cout << "size : " << ms.size() << std::endl;
    std::cout << "on top : " << ms.top() << std::endl;

    std::cout << std::endl;
    std::cout << "*******************" << std::endl;
    std::cout << "*    ITERATOR     *" << std::endl;
    std::cout << "*******************" << std::endl;
    std::cout << std::endl;
    
    MutantStack<int>::iterator it = ms.begin();
    MutantStack<int>::iterator ite = ms.end();

    std::cout << "-----print mutantstack-----" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::cout << "-----pop 2 elements-----" << std::endl;
    ms.pop();
    ms.pop();

    std::cout << "size : " << ms.size() << std::endl;
    std::cout << "on top : " << ms.top() << std::endl;

    std::cout << std::endl;
    std::cout << "*******************" << std::endl;
    std::cout << "*     REVERSE     *" << std::endl;
    std::cout << "*    ITERATOR     *" << std::endl;
    std::cout << "*******************" << std::endl;
    std::cout << std::endl;

    MutantStack<int>::reverse_iterator rit = ms.rbegin();
    MutantStack<int>::reverse_iterator rite = ms.rend();

    std::cout << "-----print mutantstack-----" << std::endl;
    while (rit != rite)
    {
        std::cout << *rit << std::endl;
        ++rit;
    }

    std::cout << std::endl; 
    std::cout << "*******************" << std::endl;
    std::cout << "*      LIST       *" << std::endl;
    std::cout << "*******************" << std::endl;
    std::cout << std::endl;

    std::list<int> l;
    for (int i = 0; i < 10; ++i)
        l.push_back(i + 1);
    std::cout << "size : " << l.size() << std::endl;
    std::cout << "on top : " << l.back() << std::endl;

    std::cout << std::endl;
    std::cout << "*******************" << std::endl;
    std::cout << "*    ITERATOR     *" << std::endl;
    std::cout << "*******************" << std::endl;
    std::cout << std::endl;
    
    std::list<int>::iterator l_it = l.begin();
    std::list<int>::iterator l_ite = l.end();

    std::cout << "-----print list-----" << std::endl;
    while (l_it != l_ite)
    {
        std::cout << *l_it << std::endl;
        ++l_it;
    }

    std::cout << "-----pop 2 elements-----" << std::endl;
    l.pop_back();
    l.pop_back();

    std::cout << "size : " << l.size() << std::endl;
    std::cout << "on top : " << l.back() << std::endl;

    std::cout << std::endl;
    std::cout << "*******************" << std::endl;
    std::cout << "*     REVERSE     *" << std::endl;
    std::cout << "*    ITERATOR     *" << std::endl;
    std::cout << "*******************" << std::endl;
    std::cout << std::endl;

    std::list<int>::reverse_iterator l_rit = l.rbegin();
    std::list<int>::reverse_iterator l_rite = l.rend();

    std::cout << "-----print list-----" << std::endl;
    while (l_rit != l_rite)
    {
        std::cout << *l_rit << std::endl;
        ++l_rit;
    }
    return 0;
}