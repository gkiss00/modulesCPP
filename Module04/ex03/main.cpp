#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#include <string>
#include <iostream>

int main()
{
    AMateria *i1 = new Ice();
    AMateria *i2 = new Ice();

    AMateria *c1 = new Cure();
    AMateria *c2 = new Cure();

    ICharacter *ch1 = new Character("Carl");

    std::cout << "Le caracter et les matieres ont ete crees :: " << std::endl <<std::endl;

    std::cout << "Ice total xp : " << i1->getTotalXP() << std::endl;
    std::cout << "Cure total xp : " << c1->getTotalXP() << std::endl;

    std::cout << std::endl << "utilisation de Ice_1 et Cure_1 :: " << std::endl <<std::endl;

    i1->use(*ch1);
    c1->use(*ch1);

    std::cout << "Ice total xp : " << i1->getTotalXP() << std::endl;
    std::cout << "Cure total xp : " << c1->getTotalXP() << std::endl;

    std::cout << std::endl << "utilisation de Ice_2 et Cure_2 :: " << std::endl <<std::endl;

    i2->use(*ch1);
    c2->use(*ch1);

    std::cout << "Ice total xp : " << i1->getTotalXP() << std::endl;
    std::cout << "Cure total xp : " << c1->getTotalXP() << std::endl;

    std::cout << std::endl << "Le caracter_1 s equipe et utile des objets out of bound :: " << std::endl <<std::endl;

    ch1->equip(i1);
    ch1->equip(c1);

    ch1->use(-4, *ch1);
    ch1->use(2, *ch1);
    ch1->use(20, *ch1);

    std::cout << "Ice total xp : " << i1->getTotalXP() << std::endl;
    std::cout << "Cure total xp : " << c1->getTotalXP() << std::endl;

    std::cout << std::endl << "Le caracter_1 utile 2X Ice et 1X Cure :: " << std::endl <<std::endl;

    ch1->use(0, *ch1);
    ch1->use(0, *ch1);
    ch1->use(1, *ch1);

    std::cout << "Ice total xp : " << i1->getTotalXP() << std::endl;
    std::cout << "Cure total xp : " << c1->getTotalXP() << std::endl;

    std::cout << std::endl << "Creation d une source de matiere :: " << std::endl <<std::endl;

    IMateriaSource *s1 = new MateriaSource();

    std::cout << std::endl << "Creation et utilisation de Ice_3 et Cure_3 via la Source_1 :: " << std::endl <<std::endl;

    AMateria *i5 = new Ice();
    AMateria *i6 = new Ice();
    AMateria *c5 = new Cure();

    s1->learnMateria(i5);
    s1->learnMateria(c5);
    s1->learnMateria(i6);

    AMateria *i3 = s1->createMateria("ice");
    AMateria *c3 = s1->createMateria("cure");

    i3->use(*ch1);
    c3->use(*ch1);

    std::cout << "Ice total xp : " << i1->getTotalXP() << std::endl;
    std::cout << "Cure total xp : " << c1->getTotalXP() << std::endl;

    std::cout << std::endl << "Assignation de Ice_2 a Ice_3 et Cure_2 a Cure_3 :: " << std::endl <<std::endl;

    i3 = i2;
    c3 = c2;

    std::cout << "Ice total xp : " << i3->getTotalXP() << std::endl;
    std::cout << "Cure total xp : " << c3->getTotalXP() << std::endl;

    std::cout << std::endl << "Creation d un nouveua caractere_2 sur base de caracter_1 :: " << std::endl <<std::endl;

    ICharacter *ch2 = new Character(*static_cast<Character*>(ch1));

    std::cout << std::endl << "Assignation de trop de matiere a caracter_2 :: " << std::endl <<std::endl;

    ch2->equip(new Ice);
    ch2->equip(new Cure);

    AMateria *i4 = s1->createMateria("ice");
    AMateria *c4 = s1->createMateria("cure");

    ch2->equip(i4);
    ch2->equip(c4);

    std::cout << std::endl << "Suppression de tout les elements :: " << std::endl;
    delete(ch1);
    delete(ch2);
    delete(i3);
    delete(c3);
    delete(i4);
    delete(c4);
    delete(s1);
    return 0;
}