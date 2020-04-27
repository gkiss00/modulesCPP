#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for action !" << std::endl;
}
TacticalMarine::TacticalMarine(const TacticalMarine &marine)
{
    (void)marine;
    std::cout << "Tactical Marine ready for action !" << std::endl;
}
TacticalMarine &TacticalMarine::operator=(const TacticalMarine &marine)
{
    (void)marine;
    std::cout << "Tactical Marine ready for action !" << std::endl;
    return (*this);
}
TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh ..." << std::endl;
}
ISpaceMarine* TacticalMarine::clone() const
{
    ISpaceMarine *tm = new TacticalMarine;
    return (tm);
}
void TacticalMarine::battleCry() const
{
    std::cout << "For the Holy PLOT !" << std::endl;
}
void TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with a bolter *" << std::endl;
}
void TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with a chainsword *" << std::endl;
}