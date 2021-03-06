#include <string>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify_from_pointer(Base *p)
{
    A *a;
    B *b;
    C *c;

    if ((a = dynamic_cast<A*>(p)) != NULL)
        std::cout << "A" << std::endl;
    if ((b = dynamic_cast<B*>(p)) != NULL)
        std::cout << "B" << std::endl;
    if ((c = dynamic_cast<C*>(p)) != NULL)
        std::cout << "C" << std::endl;
}
void identify_from_reference(Base &p)
{
    A *a;
    B *b;
    C *c;

    if ((a = dynamic_cast<A*>(&p)) != NULL)
        std::cout << "A" << std::endl;
    if ((b = dynamic_cast<B*>(&p)) != NULL)
        std::cout << "B" << std::endl;
    if ((c = dynamic_cast<C*>(&p)) != NULL)
        std::cout << "C" << std::endl;
}

Base    *generate(void)
{
    Base *base;
    int type;
    clock_t seconds;

    seconds = clock(); 
    srand(seconds);
    type = rand() % 3;
    if (type == 0){
        std::cout << "Random return A" << std::endl;
        base = new A();
    }else if (type == 1){
        std::cout << "Random return B" << std::endl;
        base = new B();
    }else{
        std::cout << "Random return C" << std::endl;
        base = new C();
    }
    return (base);
}

int     main()
{
    std::cout << "Pointeur::" << std::endl;
    Base *p = new B();
    identify_from_pointer(p);
    delete (p);

    p = new A();
    identify_from_pointer(p);
    delete (p);

    p = new C();
    identify_from_pointer(p);
    delete (p);

    std::cout << std::endl << "Reference::" << std::endl;
    p = new A();
    identify_from_reference(*p);
    delete (p);

    p = new C();
    identify_from_reference(*p);
    delete (p);

    p = new B();
    identify_from_reference(*p);
    delete (p);

    std::cout << std::endl << "Random Pointer::" << std::endl;
    p = generate();
    identify_from_pointer(p);
    delete (p);

    p = generate();
    identify_from_pointer(p);
    delete (p);

    p = generate();
    identify_from_pointer(p);
    delete (p);

    return (0);
}