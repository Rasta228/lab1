//
//  main.c
//  lab 1
//
//  Created by Rustamas on 14/02/2018.
//  Copyright © 2018 Rustamas. All rights reserved.
//
#include <string>
#include <fstream>
#include <iostream>

int main()
{
    std::ifstream inf("doska.txt");
    std::string str;
    while (inf.eof() == false)
    {
        std::getline(inf, str);
        std::cout << str;
        std::getchar();
    }

    return 0;
}
