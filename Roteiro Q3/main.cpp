#include <iostream>
#include "Empregado.h"
#include <string>

int main()
{
    Empregado a1("josimar", "silva", 1200.0);
    Empregado a2("pinto", "rosa", 500.0);

    std::cout << a1.getSalario() * 12 << std::endl;
    std::cout << a2.getSalario() * 12 << std::endl;
    std::cout << a1.getSalario() * 12 * 1.1 << std::endl;
    std::cout << a2.getSalario() * 12 * 1.1 << std::endl;
    return 0;
}
