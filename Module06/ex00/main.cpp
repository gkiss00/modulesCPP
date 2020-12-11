#include <string>
#include <iostream>

static int check_error(int argc, char **argv)
{
    if (argc != 2)
        return (-1);
    return (0);
}

int main(int argc, char **argv)
{
    if (check_error(argc, argv) == -1)
        return (1);
    std::string number(argv[1]);
    try {
        int x = std::stoi(number);
        char c = x;
        if (c >= ' ' && c <= '~')
        {
            std::cout << "char: '" << c << "'" << std::endl;
        }
        else if (c < 0 || c > 127)
        {
            std::cout << "char: impossible" << std::endl;
        }
        else
        {
            std::cout << "char: Non displayable" << std::endl;
        }
        
    }catch (std::exception &e){
        std::cout << "char: impossible" << std::endl;
    }

    try {
        int i = std::stoi(number);
        std::cout << "int: " << i << std::endl;
    }catch (std::exception &e){
        std::cout << "int: impossible" << std::endl;
    }

    try {
        float f = std::stof(number);
        try{
            int x = std::stoi(number);
            if (f - (float)x != 0)
                std::cout << "float: " << f << "f" << std::endl;
            else
                std::cout << "float: " << f << ".0f" << std::endl;          
        }catch (std::exception &e){
            std::cout << "float: " << f << "f" << std::endl;
        }
    }catch (std::exception &e){
        std::cout << "float: mpossible" << std::endl;
    }

    try {
        double d = std::stod(number);
        try{
            int x = std::stoi(number);
            if (d - (float)x != 0)
                std::cout << "double: " << d << std::endl;
            else
                std::cout << "double: " << d << ".0" << std::endl;          
        }catch (std::exception &e){
            std::cout << "double: " << d << std::endl;
        }
    }catch (std::exception &e){
        std::cout << "double: mpossible" << std::endl;
    }

    return (0);
}