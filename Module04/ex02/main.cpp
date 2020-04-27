#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"

int     main()
{

    std::cout << "*****Escouade test*****" << std::endl << std::endl;

    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISpaceMarine* carl = new AssaultTerminator;
    ISquad* vlc = new Squad;

    vlc->push(bob);
    vlc->push(jim);
    vlc->push(bob);
    vlc->push(carl);
    vlc->push(carl);
    vlc->push(NULL);
    vlc->push(NULL);

    std::cout << "Votre squad est composee de " << vlc->getCount() << " soldat" << std::endl;
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    std::cout << vlc->getUnit(20) << std::endl;
    std::cout << vlc->getUnit(-1) << std::endl;

    delete vlc;


    std::cout << std::endl << "*****Premiere escouade*****" << std::endl << std::endl;


    Squad squad;

    squad.push(new AssaultTerminator);
    squad.push(new TacticalMarine);
    squad.push(NULL);

    AssaultTerminator *terminator = static_cast<AssaultTerminator*>(squad.getUnit(0)->clone());
    TacticalMarine *marine = static_cast<TacticalMarine*>(squad.getUnit(1)->clone());

    delete(terminator);
    delete(marine);

    AssaultTerminator *terminator2 = new AssaultTerminator(*static_cast<AssaultTerminator*>(squad.getUnit(0)));
    TacticalMarine *marine2 = new TacticalMarine(*static_cast<TacticalMarine*>(squad.getUnit(0)));

    delete(terminator2);
    delete(marine2);

    for (int i = 0; i < squad.getCount(); ++i)
    {
        ISpaceMarine* cur = squad.getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    std::cout << std::endl << "*****Nouvelle escouade sur base de la premiere*****" << std::endl << std::endl;

    Squad *sq = new Squad(*static_cast<Squad*>(&squad));

    for (int i = 0; i < sq->getCount(); ++i)
    {
        ISpaceMarine* cur = sq->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    delete(sq);

    std::cout << std::endl << "*****Retour sur premiere escouade*****" << std::endl << std::endl;

    for (int i = 0; i < squad.getCount(); ++i)
    {
        ISpaceMarine* cur = squad.getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    return (0);
}