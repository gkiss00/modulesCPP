#include "Character.hpp"

Character::Character()
{
    this->name = "no_name";
    this->pa = 0;
    this->weapon = NULL;
}

Character::Character(std::string const &name)
{
    this->name = name;
    this->pa = 40;
    this->weapon = NULL;
}
Character::Character(const Character &character)
{
    this->name = character.name;
    this->pa = character.pa;
    this->weapon = character.weapon;
}
Character &Character::operator=(const Character &character)
{
    this->name = character.name;
    this->pa = character.pa;
    this->weapon = character.weapon;
    return (*this);
}
Character::~Character()
{

}

std::string Character::getName()
{
    return (this->name);
}

int Character::getPA()
{
    return (this->pa);
}

AWeapon *Character::getWeapon()
{
    return (this->weapon);
}

void Character::recoverAP()
{
    int gain = 10;
    if (this->pa + gain > 40)
        this->pa = 40;
    else
        this->pa += gain;
    
}

void Character::equip(AWeapon *weapon)
{
    this->weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
    if (this->weapon != NULL && this->pa >= this->weapon->getAPCost())
    {
        this->pa -= this->weapon->getAPCost();
        std::cout << this->name << " attaque " << enemy->getType() << " with a " << this->weapon->getName() << std::endl;
        this->weapon->attack();
        enemy->takeDamage(this->weapon->getDamage());
    }
}