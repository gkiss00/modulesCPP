#include <unistd.h>
#include <string>
#include <iostream>

class Megaphone
{
    private:

    int     nb_message;
    char    **message;

    public:

    Megaphone(int argc, char **stri)
    {
        nb_message = argc;
        message = stri;
    }
    
    void    print_message()
    {
        int         i;
        std::string default_message;

        i = 1;
        default_message = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        if (nb_message == 1)
            std::cout << default_message << "\n";
        else
        {
            while (i < nb_message)
            {
                toUpper(message[i]);
                write(1, message[i], ft_strlen(message[i]));
                ++i;
            }
            std::cout << '\n';
        }
        
    }

    private:

    int     ft_strlen(char *str)
    {
        int i;

        i = 0;
        while (str[i] != '\0')
            ++i;
        return (i);
    }

    void    toUpper(char *str)
    {
        int     i;

        i = 0;
        while (str[i] != '\0')
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - ('a' - 'A');
            ++i;
        }
    }


};

int         main(int argc, char **argv)
{
    Megaphone megaphone(argc, argv);

    megaphone.print_message();
}