#include "Pony.hpp"
#include <iostream>

void    ponyOnTheStack()
{
    Pony pony;

    pony.sauter();
    std::cout << "Le pony a " << pony.getAge() << " ans" << std::endl;
    pony.vieillir();
    std::cout << "Le pony a " << pony.getAge() << " ans" << std::endl;
}

void    ponyOnTheHeap()
{
    Pony *pony = new Pony("musatng", 5, 200);
    pony[0].sauter();
    std::cout << "Le pony a " << pony->getAge() << " ans" << std::endl;
    pony->vieillir();
    std::cout << "Le pony a " << pony->getAge() << " ans" << std::endl;
    delete pony;
}

int     main()
{
    std::cout << "Pony sur la stack :" << std::endl << std::endl;
    ponyOnTheStack();
    std::cout << std::endl << std::endl << std::endl;
    std::cout << "Pony sur la heap :" << std::endl << std::endl;
    ponyOnTheHeap();
}