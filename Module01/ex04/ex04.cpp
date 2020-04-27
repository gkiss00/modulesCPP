#include <string>
#include <iostream>

int     main()
{
    std::string s;
    std::string *pointer;
    std::string &reference = s;

    s = "HI THIS IS BRAIN";
    pointer = &s;

    std::cout << *pointer << std::endl;
    std::cout << reference << std::endl;
}