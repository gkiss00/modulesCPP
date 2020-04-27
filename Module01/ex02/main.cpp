#include "ZombieEvent.hpp"

int         main()
{
    ZombieEvent ze1;
    ZombieEvent ze2("useless");

    Zombie *z1 = ze1.newZombie("Carl");
    Zombie *z2 = ze2.newZombie("Carl");
    ze1.randomChump();
    Zombie z3;
    Zombie z4("Daniel", "youtubeuse");



    delete z1;
    delete z2;
}