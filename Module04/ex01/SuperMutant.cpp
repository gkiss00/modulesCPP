#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Break everything !" << std::endl;
}
SuperMutant::SuperMutant(const SuperMutant &supermutant) : Enemy(supermutant)
{

}
SuperMutant &SuperMutant::operator=(const SuperMutant &supermutant)
{
    this->hp = supermutant.hp;
    this->type = supermutant.type;
    return (*this);
}
SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh ..." << std::endl;
}
        
void SuperMutant::takeDamage(int damage)
{
    int reduction = 3;

    if (damage - reduction > 0)
    {
        if (damage - reduction > this->hp)
            this->hp = 0;
        else
            this->hp -= damage - reduction;  
    }
}