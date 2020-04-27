#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
}
AssaultTerminator::AssaultTerminator(const AssaultTerminator &terminator)
{
    (void)terminator;
    std::cout << "* teleports from space *" << std::endl;
}
AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &terminator)
{
    (void)terminator;
    std::cout << "* teleports from space *" << std::endl;
    return (*this);
}
AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I’ll be back ..." << std::endl;
}
ISpaceMarine* AssaultTerminator::clone() const
{
    AssaultTerminator *t = new AssaultTerminator();
    return (t);
}
void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. Purify it !" << std::endl;
}
void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
}
void AssaultTerminator::meleeAttack() const
{
    std::cout << "* attaque with chainfists *" << std::endl;
}