#ifndef ENEMY
#define ENEMY

#include <string>
#include <iostream>

class Enemy {
    protected:
        int hp;
        std::string type;
    private:
        Enemy();
    public:
        Enemy(int hp, std::string const &type);
        Enemy(const Enemy &enemy);
        Enemy &operator=(const Enemy &enemi);
        virtual ~Enemy();

        std::string getType() const;
        int getHP() const;

        virtual void takeDamage(int damage);
};

#endif