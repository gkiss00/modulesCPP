#include <string>
#include <iostream>
#include <functional>

template<typename T>
void    fctfct(T &t)
{
    t += 2; 
}

template<typename T>

void    iter(T tab[], int size, void(*f)(T &lol))
{
    for (int i = 0; i < size; ++i)
    {
        f(tab[i]);
    }
}

int main()
{
    int tab[5];
    for (int i = 0; i < 5; ++i)
        tab[i] = i;

    std::cout << "Avant :: " << std::endl;
    for (int i = 0; i < 5; ++i)
        std::cout << tab[i] << std::endl;
    iter(tab, 5, fctfct);
    std::cout << std::endl << "Apres :: " << std::endl;
    for (int i = 0; i < 5; ++i)
        std::cout << tab[i] << std::endl;

    std::string str[3];
    str[0] = "oui";
    str[1] = "non";
    str[2] = "bof";

    std::cout << std::endl << "Avant :: " << std::endl;
    for (int i = 0; i < 3; ++i)
        std::cout << str[i] << std::endl;
    iter(str, 3, fctfct);
    std::cout << std::endl << "Apres :: " << std::endl;
    for (int i = 0; i < 3; ++i)
        std::cout << str[i] << std::endl;

    char ch[3];
    ch[0] = 'a';
    ch[1] = 'b';
    ch[2] = 'c';

    std::cout << std::endl << "Avant :: " << std::endl;
    for (int i = 0; i < 3; ++i)
        std::cout << ch[i] << std::endl;
    iter(ch, 3, fctfct);
    std::cout << std::endl << "Apres :: " << std::endl;
    for (int i = 0; i < 3; ++i)
        std::cout << ch[i] << std::endl;
    return (0);
}