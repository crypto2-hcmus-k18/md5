#include <iostream>
#include "md5.h"


void main()
{
    std::string filename = "empty.txt";
    std::cout << "MD5 of " << filename << ": " << md5(filename) << std::endl;
    system("PAUSE");
}
