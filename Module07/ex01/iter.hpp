template<typename T>
void    fctfct(T &t)
{
    t += 2; 
}

template<typename T>

void    iter(T tab[], int size, void(*f)(T &lol))
{
    for (int i = 0; i < size; ++i)
    {
        f(tab[i]);
    }
}