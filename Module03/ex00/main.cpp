#include "FragTrap.hpp"

#include <string>
#include <iostream>

int     main()
{
    std::string enemi = "T-1000";
    FragTrap terminator("T-800");

    terminator.meleeAttack(enemi);
    terminator.rangedAttack(enemi);
    terminator.beRepaired(20);
    terminator.vaulthunter_dot_exe(enemi);
    terminator.vaulthunter_dot_exe(enemi);
    terminator.vaulthunter_dot_exe(enemi);
    terminator.vaulthunter_dot_exe(enemi);
    terminator.vaulthunter_dot_exe(enemi);
    terminator.takeDamages(20);
    terminator.takeDamages(120);
}