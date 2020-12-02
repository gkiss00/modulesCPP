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

std::string replace_word(std::string original, const std::string aTrouver, const std::string aRemplacer)
{
    std::string new_content;

    new_content = "";
    for (int i=0; i < original.size(); i++)
	{
		if (!(original.substr(i)).find(aTrouver))
		{
			i += aTrouver.size() - 1;
			new_content += aRemplacer;
		}
		else
			new_content += original[i];
	}
    return (new_content);
}

int copy_in_new_file(char *name, std::string new_content)
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
    file << new_content;
    file.close();
    return (0);
}

int copy_file(char **argv)
{
    std::string line;
    std::string content;
    std::string new_content;
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
    content.erase(content.size() - 1);
    file.close();
    std::cout << content << std::endl;
    new_content = replace_word(content, argv[2], argv[3]);
    std::cout << new_content << std::endl;
    if (copy_in_new_file(argv[1], new_content) == -1)
        return (-1);
    return (1);
}

int main(int argc, char **argv)
{
    if (check_error(argc, argv) == -1)
        return (1);
    if (copy_file(argv) == -1)
        return (1);
    return (0);
}