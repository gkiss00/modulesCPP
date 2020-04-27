#include <string>
#include <iostream>
#include <fstream>
#include <stdio.h>

int check_error(int argc, char **argv)
{
    std::string s1;
    std::string s2;
    std::ifstream file(argv[1]);

    if (argc != 4)
    {
        std::cout << "Nombre d arguments non calide" << std::endl;
        return (-1);
    }
    s1 = argv[2];
    s2 = argv[3];
    if (s2.length() == 0 || s1.length() == 0)
    {
        std::cout << "Un des arguments passe en paramettre est vide" << std::endl;
        return (-1);
    }
    if (file)
    {
        file.close();
        return (0);
    }
    std::cout << "Une erreur est survenu lors de l ouverture du fichier" << std::endl;
    return (-1);
}

int replace_word(std::string &original, const std::string &aTrouver, const std::string &aRemplacer)
{
    int n = original.find(aTrouver);
    if (n==std::string::npos)
    { 
        return 0;
    }
    else
    {
        original.replace(n,aTrouver.size(),aRemplacer);
        return 1+replace_word(original, aTrouver, aRemplacer);
    }
}

std::string get_contenu(std::string contenu)
{
    std::string content;

    content = "";
    for (int i = 0; i < contenu.length() - 1; ++i)
    {
        content += contenu.at(i);
    }
    return (content);
}

int copy_in_new_file(char *name, std::string content)
{
    std::string extension = ".replace";
    std::string file_name = name + extension;
    std::ifstream file1(file_name);

    if (file1)
    {
        std::cout << "Le fichier de copi existe deja, impossible de l ecraser" << std::endl;
        file1.close();
        return (-1);
    }

    std::ofstream file(file_name);
    if (file.bad())
    {
        std::cout << "Probleme lors de l ouverture du fichier de copie" << std::endl;
        return (-1);
    }
    file << content << std::endl;
    file.close();
    return (0);
}

int copy_file(char **argv)
{
    std::string line;
    std::string content;
    std::ifstream file(argv[1]);

    content = "";
    if (!(file))
    {
        std::cout << "Une erreur est survenu lors de l ouverture du fichier" << std::endl;
        return (-1);
    }
    while (std::getline(file, line))
    {
        content += line;
        content += "\n";
    }
    content = get_contenu(content);
    file.close();
    replace_word(content, argv[2], argv[3]);
    if (copy_in_new_file(argv[1], content) == -1)
        return (-1);
    return (1);
}

int main(int argc, char **argv)
{
    if (check_error(argc, argv) == -1)
        return (0);
    if (copy_file(argv) == -1)
        return (0);
    return (1);
}