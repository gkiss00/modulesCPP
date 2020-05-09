#include "Array.hpp"
#include <string>
#include <iostream>

int         main()
{
    std::cout <<"Creation d une Array de int vide" << std::endl;
    Array<int> ar1;

    std::cout <<"Creation d une Array de 5 int" << std::endl;
    Array<int> ar2(5);

    try{
        for (int i = 0; i < 5; ++i)
        {
            ar2[i] = i;
        }
        for (int i = 0; i < ar2.size(); ++i)
        {
            std::cout << "ar[" << i << "] = " << ar2[i] << std::endl;
        }
    }catch(std::exception &e){
        std::cout <<e.what() << std::endl;
    }

    try{
        std::cout << ar2[100] << std::endl;
    }catch(std::exception &e){
        std::cout <<e.what() << std::endl;
    }

    try{
        std::cout << ar2[-1] << std::endl;
    }catch(std::exception &e){
        std::cout <<e.what() << std::endl;
    }

    std::cout <<"Creation d une Array de string vide" << std::endl;
    Array<int> ar3;

    std::cout <<"Creation d une Array de 3 string" << std::endl;
    Array<std::string> ar4(3);
    
    try{
        ar4[0] = "oui";
        ar4[1] = "non";
        ar4[2] = "bof";
        for (int i = 0; i < ar4.size(); ++i)
        {
            std::cout << "ar[" << i << "] = " << ar4[i] << std::endl;
        }
    }catch(std::exception &e){
        std::cout <<e.what() << std::endl;
    }

    return (0);
}