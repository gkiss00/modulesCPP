#include "header.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <sstream>

static std::string randomString(int nb)
{
    char k;
    clock_t seconds;
    seconds = clock(); 
    srand(seconds);

    std::string s1 = "";

    for (int i = 0; i < nb; ++i)
    {
        int c = rand() % 2;
        if (c == 0){
            k = (rand() % 10) + '0';
            s1 += k;
        }else{
            int x = rand() % 2;
            if (x == 0){
                k = (rand() % 26) + 'A';
                s1 += k;
            }else{
                k = (rand() % 26) + 'a';
                s1 += k;
            }
        }
    }
    return (s1);
}

void    *serialize()
{
    clock_t seconds;
    std::string *total = new std::string[1];
    std::string s1 = "";
    std::string s2 = "";
    int         x;

    seconds = clock(); 
    srand(seconds);
    s1 = randomString(8);
    s2 = randomString(8);
    x = (rand() % 201) - 100;

    total[0] = s1 + std::to_string(x) + s2;

    std::cout << "serialize::" << std::endl;
    std::cout << "s1:       " << s1 << std::endl;
    std::cout << "n:        " << x << std::endl;
    std::cout << "s2:       " << s2 << std::endl;

    return (total);
}

Data    *deserialize(void *raw)
{
    Data *data = new Data();
    std::string *tmp;
    std::string nb;

    tmp = static_cast<std::string*>(raw);

    data->s1 = tmp[0].substr(0, 8);
    nb = tmp[0].substr(8, (tmp[0].length() - 16));
    data->s2 = tmp[0].substr((8 + nb.length()), 8);
    data->n = std::stoi(nb);

    return (data);
}

int     main()
{
    void *p;
    Data *data;

    p = serialize();
    data = deserialize(p);

    std::cout << std::endl << "Data::" << std::endl;
    std::cout << "data->s1: " << data->s1 << std::endl;
    std::cout << "data->n : " << data->n << std::endl;
    std::cout << "data->s2: " << data->s2 << std::endl;

    delete (data);
    return (0);
}