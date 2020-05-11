#include "mutantstack.hpp"
#include <string>
#include <iostream>
#include <stack>
#include <list>
#include <thread>
#include <unistd.h>

int main()
{
    MutantStack<int> ms;
    ms.push(1);
    ms.push(2);
    ms.push(3);
    ms.push(5);
    ms.push(8);
    std::cout << "size : " << ms.size() << std::endl;
    std::cout << "on top : " << ms.top() << std::endl;

    MutantStack<int>::iterator it = ms.begin();
    MutantStack<int>::iterator ite = ms.end();
    try{
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        ++it;
        std::cout << *it << std::endl;
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }

    ms.pop();
    ms.pop();

    std::cout << "size : " << ms.size() << std::endl;
    std::cout << "on top : " << ms.top() << std::endl;

    MutantStack<int>::iterator it_bis = ms.begin();
    MutantStack<int>::iterator ite_bis = ms.end();
    try{
        while (it_bis != ite_bis)
        {
            std::cout << *it_bis << std::endl;
            ++it_bis;
        }
        ++it_bis;
        std::cout << *it_bis << std::endl;
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    
    std::stack<int> s(ms);
    return 0;
}