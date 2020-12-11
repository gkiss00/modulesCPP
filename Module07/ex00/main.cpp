#include <string>
#include <iostream>
#include "whatever.hpp"

int     main()
{
    int i1 = 2;
    int i2 = 5;

    std::cout << "Nombres::" << std::endl << std::endl;

    std::cout << "Le min entre " << i1 << " et " << i2 << " est " << min(i1, i2) << std::endl;
    std::cout << "Le min entre " << i1 << " et " << i1 << " est " << min(i1, i1) << std::endl;
    std::cout << "Le max entre " << i1 << " et " << i2 << " est " << max(i1, i2) << std::endl;
    std::cout << "Le max entre " << i1 << " et " << i1 << " est " << max(i1, i1) << std::endl;
    std::cout << "Avant swap I1 = " << i1 << " et I2 = " << i2 << std::endl;
    swap(i1, i2);
    std::cout << "Apres swap I1 = " << i1 << " et I2 = " << i2 << std::endl;

    std::string s1 = "chaine1";
    std::string s2 = "chaine2";

    std::cout << std::endl << "String::" << std::endl << std::endl;

    std::cout << "Le min entre " << s1 << " et " << s2 << " est " << min(s1, s2) << std::endl;
    std::cout << "Le min entre " << s1 << " et " << s1 << " est " << min(s1, s1) << std::endl;
    std::cout << "Le max entre " << s1 << " et " << s2 << " est " << max(s1, s2) << std::endl;
    std::cout << "Le max entre " << s1 << " et " << s1 << " est " << max(s1, s1) << std::endl;
    std::cout << "Avant swap S1 = " << s1 << " et S2 = " << s2 << std::endl;
    swap(s1, s2);
    std::cout << "Apres swap S1 = " << s1 << " et S2 = " << s2 << std::endl;

    char c1 = 'a';
    char c2 = 'z';

    std::cout << std::endl << "Character::" << std::endl << std::endl;

    std::cout << "Le min entre " << c1 << " et " << c2 << " est " << min(c1, c2) << std::endl;
    std::cout << "Le min entre " << c1 << " et " << c1 << " est " << min(c1, c1) << std::endl;
    std::cout << "Le max entre " << c1 << " et " << c2 << " est " << max(c1, c2) << std::endl;
    std::cout << "Le max entre " << c1 << " et " << c1 << " est " << max(c1, c1) << std::endl;
    std::cout << "Avant swap C1 = " << c1 << " et C2 = " << c2 << std::endl;
    swap(c1, c2);
    std::cout << "Apres swap C1 = " << c1 << " et C2 = " << c2 << std::endl;

    return (0);
}