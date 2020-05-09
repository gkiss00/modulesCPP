#ifndef ARRAY
#define ARRAY

#include <string>
template<typename T>

class Array {
    protected:
        int sizeTab;
        
    public:
        T *tab;
        Array()
        {
            this->tab = NULL;
            sizeTab = 0;
        }
        Array(unsigned int n)
        {
            this->tab = new T[n];
            this->sizeTab = n;
        }
        Array(const Array &target)
        {
            this->sizeTab = target.sizeTab;
            this->tab = new T[this->sizeTab];
            for (int i = 0; i < sizeTab; ++i)
            {
                this->tab[i] = target.tab[i];
            }
        }
        Array &operator=(const Array &target)
        {
            this->sizeTab = target.sizeTab;
            this->tab = new T[this->sizeTab];
            for (int i = 0; i < sizeTab; ++i)
            {
                this->tab[i] = target.tab[i];
            }
            return (*this);
        }
        ~Array()
        {
            delete[](this->tab);
        }

        T &operator[](int i)
        {
            if (i < 0 || i >= this->sizeTab)
                throw std::range_error("Index out of bound");
            else
                return (this->tab[i]);
        }

        unsigned int size()
        {
            return (this->sizeTab);
        }
};

#endif