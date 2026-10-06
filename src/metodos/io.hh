#ifndef IO_HH
#define IO_HH

#include <iostream>

int readnumber()
{
    int input;
    std::cout << "Ingrese un nro\n";
    std::cin >> input;
    return input;
}

void write_answer(int x)
{
    std::cout << "El nro ingresado es " << x << "\n";
}

#endif // IO_HH
 