#include <iostream>
#include "Pessoa.h"

int main()
{
    Pessoa a1("Junio");
    Pessoa a2("Tonho", 19, 13581717);
    Pessoa a3("Manel", 41, 13581487);
    Pessoa a4("Silvo", 25, 13551487);
    Pessoa a5("Juse", 17, 51231287);



    std::cout << a1.getNome() << " " << a1.getIdade() << " " << a1.getTelefone() << std::endl;
    std::cout << a2.getNome() << " " << a2.getIdade() << " " << a2.getTelefone() << std::endl;
    std::cout << a3.getNome() << " " << a3.getIdade() << " " << a3.getTelefone() << std::endl;
    std::cout << a4.getNome() << " " << a4.getIdade() << " " << a4.getTelefone() << std::endl;
    std::cout << a5.getNome() << " " << a5.getIdade() << " " << a5.getTelefone() << std::endl;
    return 0;
}
