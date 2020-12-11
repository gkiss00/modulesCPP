#ifndef MUTANTSTACK
#define MUTANTSTACK

#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <vector>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>{  
    public:

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

        explicit MutantStack();
        explicit MutantStack(MutantStack &target);
        MutantStack &operator=(const MutantStack<T> &target);
        ~MutantStack();
        /*
        class iterator : public std::iterator<std::output_iterator_tag, T>
        {
            public:
                explicit iterator(MutantStack<T> &target, unsigned int index);
                iterator &operator++();
                iterator &operator--();
                iterator &operator++(int);
                iterator &operator--(int);
                T operator*();
                bool operator!=(MutantStack::iterator &target);
            private:
                MutantStack<T> &target;
                unsigned int index;
        };
        */
        iterator begin();
        const_iterator begin() const;

        iterator end();
        const_iterator end() const;

        reverse_iterator rbegin();
        const_reverse_iterator rbegin() const;

        reverse_iterator rend();
        const_reverse_iterator rend() const;
};
//**********************
//**********************
//*****CONSTRUCTOR******
//**********************
//**********************
template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{

}

template<typename T>
MutantStack<T>::MutantStack(MutantStack &target)
{
    this->C = target.C;
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &target)
{
    this->c = target.c;
    return (*this);
}

template<typename T>
MutantStack<T>::~MutantStack()
{

}
//**********************
//**********************
//*******ITERATOR*******
//**********************
//**********************
template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return (std::stack<T>::c.begin());
    //return (MutantStack<T>::iterator(*this, 0));
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
    return (std::stack<T>::c.begin());
    //return (MutantStack<T>::iterator(*this, 0));
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return (std::stack<T>::c.end());
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
    return (std::stack<T>::c.end());
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
    return (std::stack<T>::c.rbegin());
    //return (MutantStack<T>::iterator(*this, 0));
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const
{
    return (std::stack<T>::c.rbegin());
    //return (MutantStack<T>::iterator(*this, 0));
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
    return (std::stack<T>::c.rend());
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const
{
    return (std::stack<T>::c.rend());
}
/*
template<typename T>
MutantStack<T>::iterator::iterator(MutantStack<T> &target, unsigned int index) : target(target)
{
    this->index = index;
}

template<typename T>
typename MutantStack<T>::iterator &MutantStack<T>::iterator::operator++()
{
    this->index += 1;
    return (*this);
}

template<typename T>
typename MutantStack<T>::iterator &MutantStack<T>::iterator::operator--()
{
    this->index -= 1;
    return (*this);
}

template <typename T>
typename MutantStack<T>::iterator    &MutantStack<T>::iterator::operator++(int i)
{
    (void)i;
	iterator    tmp(*this);
    operator++();
    return tmp;
}

template <typename T>
typename MutantStack<T>::iterator    &MutantStack<T>::iterator::operator--(int i)
{
    (void)i;
	iterator    tmp(*this);
    operator--();
    return tmp;
}

template<typename T>
T MutantStack<T>::iterator::operator*()
{
    T ret;
    std::vector<T> tab;
    unsigned long int size = this->target.size();

    if (this->index < 0 || this->index >= this->target.size())
        throw std::range_error("Index out of bound");
    for (unsigned long int i = this->index; i < size - 1; ++i)
    {
        tab.push_back(this->target.top());
        this->target.pop();
    }
    ret = this->target.top();
    for (unsigned long int i = 0; i < tab.size(); ++i)
    {
        this->target.push(tab.at(tab.size() - 1 - i));
    }
    return (ret);
}

template<typename T>
bool MutantStack<T>::iterator::operator!=(MutantStack::iterator &target)
{
    return (this->index != target.index);
}
*/
#endif