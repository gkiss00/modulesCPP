#include "Enemy.hpp"

Enemy::Enemy()
{
    this->type = "no_type";
    this->hp = 0;
}

Enemy::Enemy(int hp, std::string const &type)
{
    this->hp = hp;
    this->type = type;
}
Enemy::Enemy(const Enemy &enemy)
{
    this->hp = enemy.hp;
    this->type = enemy.type;
}
Enemy &Enemy::operator=(const Enemy &enemy)
{
    this->hp = enemy.hp;
    this->type = enemy.type;
    return (*this);
}
Enemy::~Enemy()
{

}

std::string Enemy::getType() const
{
    return (this->type);
}
int Enemy::getHP() const
{
    return (this->hp);
}

void Enemy::takeDamage(int damage)
{
    if (damage > 0)
    {
        if (damage > this->hp)
            this->hp = 0;
        else
            this->hp -= damage;  
    }
}