#include "Character.hpp"
#include "Enemy.hpp"
#include "AWeapon.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

std::ostream &operator<<(std::ostream &os, Character &charact)
{
    if (charact.getWeapon() != NULL)
        os << charact.getName() << " has " << charact.getPA() << " AP  and carries a " << charact.getWeapon()->getName() << std::endl;
    else
        os << charact.getName() << " has " << charact.getPA() << " AP  and is unarmed" << std::endl;
    
    return (os);
}

std::ostream &operator<<(std::ostream &os, Enemy &charact)
{
    os << charact.getType() <<  " : " << charact.getHP() << std::endl;
    
    return (os);
}

int main()
{
    int i;

    i = 0;
    Character* moi = new Character("moi");
    std::cout << *moi;

    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();

    

    Enemy* b = new RadScorpion();
    Enemy* b2 = new SuperMutant();
    while (b->getHP() != 0)
    {
        if (i % 2 == 0)
        {
            moi->equip(pr);
            std::cout << *moi;
        }
        else
        {
            moi->equip(pf);
            std::cout << *moi;
        }
        if (moi->getPA() < moi->getWeapon()->getAPCost())
            moi->recoverAP();
        else
            moi->attack(b);
        std::cout << moi << b;
        ++i;
    }
    delete (b);
    while (b2->getHP() != 0)
    {
        if (i % 2 == 0)
        {
            moi->equip(pr);
            std::cout << *moi;
        }
        else
        {
            moi->equip(pf);
            std::cout << *moi;
        }
        if (moi->getPA() < moi->getWeapon()->getAPCost())
            moi->recoverAP();
        else
            moi->attack(b2);
        std::cout << *moi << *b2;
        ++i;
    }
    delete(b2);
    delete (pf);
    delete(pr);
    delete(moi);
    return 0;
}