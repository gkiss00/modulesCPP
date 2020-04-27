#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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

    std::cout << std::endl << std::endl;
    
    std::string enemi2 = "Richard Sammel";
    ScavTrap oss("oss117");

    oss.meleeAttack(enemi2);
    oss.rangedAttack(enemi2);
    oss.beRepaired(20);
    oss.challengeNewcomer(enemi2);
    oss.challengeNewcomer(enemi2);
    oss.challengeNewcomer(enemi2);
    oss.challengeNewcomer(enemi2);
    oss.challengeNewcomer(enemi2);
    oss.takeDamages(20);
    oss.takeDamages(120);
}