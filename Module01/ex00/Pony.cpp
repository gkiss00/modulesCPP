#include "Pony.hpp"

#include <iostream>
#include <string>

Pony::Pony()
{
    this-> race = "mustang";
    this->size = 200;
    this->age = 5;
}

Pony::Pony(std::string race, int age, int size)
{
    this->race = race;
    this->size = size;
    this->age = age;
}

int         Pony::getAge()
{
    return (this->age);
}

int         Pony::getSize()
{
    return (this->size);
}

void        Pony::sauter(){
    std::cout << "Le poney saute" << std::endl;
}

void        Pony::vieillir(){
    std::cout << "Le poney viellit" << std::endl;
    age += 1;
}