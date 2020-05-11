#include "easyfind.hpp"
#include <string>
#include <iostream>
#include <list>
#include <vector>

int     main()
{
    std::vector<int>    first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    first.push_back(4);
    first.push_back(5);
    std::cout << "Position du chiffre 4 dans la premiere table : " << easyfind(first, 4) << std::endl;
    std::cout << "Position du chiffre 9 dans la premiere table : " << easyfind(first, 9) << std::endl;

    std::list<int> second;
    second.push_back(1);
    second.push_back(2);
    second.push_back(3);
    second.push_back(4);
    second.push_back(5);
    std::cout << "Position du chiffre 5 dans la deuxieme table : " << easyfind(first, 5) << std::endl;
    std::cout << "Position du chiffre -3 dans la deuxieme table : " << easyfind(first, -3) << std::endl;
    return(0);
}