template<typename T>
int    easyfind(T &container, int n)
{
    for (unsigned long int i = 0; i < container.size(); ++i)
    {
        if (container.at(i) == n)
            return (i);
    }
    return (-1);
}