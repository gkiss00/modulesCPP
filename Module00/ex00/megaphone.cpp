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
            std::cout << default_message << std::endl;
        else
        {
            while (i < nb_message)
            {
                std::string tmp(message[i]);
                for (int j = 0; j < tmp.length(); ++j){
                    if(toupper(tmp[j]) != tmp[j])
                        putchar(toupper(tmp[j]));
                    else
                        putchar(tmp[j]);   
                }    
                ++i;
            }
            std::cout << std::endl;
        }
    }
};

int         main(int argc, char **argv)
{
    Megaphone megaphone(argc, argv);

    megaphone.print_message();
}