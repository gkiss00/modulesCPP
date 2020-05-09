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
    
    return (0);
}