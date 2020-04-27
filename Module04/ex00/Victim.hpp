#ifndef VICTIM
#define VICTIM

#include <string>
#include<iostream>

class Victim {
    private:
        
    protected:
        std::string name;
        Victim();
    public:
        Victim(std::string name);
        Victim(const Victim &victim);
        Victim &operator=(const Victim &victim);
        virtual ~Victim();

        std::string getName();

        void    introduce();
        virtual void getPolymorphed() const;
};

#endif