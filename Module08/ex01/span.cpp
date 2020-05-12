#include "span.hpp"

Span::Span()
{
    this->max = 0;
}
Span::Span(unsigned int nb)
{
    this->max = nb;
}
Span::Span(const Span &target)
{
    this->max = target.max;
    for (unsigned long int i = 0; i < this->tab.size(); ++i)
    {
        this->tab.push_back(target.tab.at(i));
    }
}
Span &Span::operator=(Span &target)
{
    this->max = target.max;
    for (unsigned long int i = 0; i < this->tab.size(); ++i)
    {
        this->tab.push_back(target.tab.at(i));
    }
    return (*this);
}
Span::~Span()
{

}
void Span::addNumber(int nb)
{
    if (this->tab.size() < this->max)
        this->tab.push_back(nb);
    else
        throw std::runtime_error("Span is full");
}
int Span::shortestSpan()
{
    int min;
    int max;
    int diff;
    if (this->tab.size() <= 1)
        throw std::runtime_error("Span not long enough");
    min = this->tab.at(0);
    max = this->tab.at(1);
    diff = abs(max - min);
    for (unsigned long int i = 0; i < this->tab.size() - 1; ++i)
    {
        for (unsigned long int j = i + 1; j < this->tab.size(); ++j)
        {
            if (abs(this->tab.at(i) - this->tab.at(j)) < diff)
                diff = abs(this->tab.at(i) - this->tab.at(j));
        }
    }
    return (diff);
}
int Span::longestSpan()
{
    if (this->tab.size() <= 1)
        throw std::runtime_error("Span not long enough");
    return (*std::max_element(this->tab.begin(), this->tab.end()) - *std::min_element(this->tab.begin(), this->tab.end()));
}