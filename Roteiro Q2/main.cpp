#include <iostream>
#include <string>
#include "Invoice.h"

int main()
{
    Invoice o1(2, "vassoura", 3, 5.70);

    std::cout << o1.getNumero() << std::endl;
    std::cout <<o1.getPreco()<<std::endl;
    std::cout <<o1.getNumero()<<std::endl;
    std::cout <<o1.getQuantidade()<<std::endl;
    std::cout <<o1.getInvoiceAmount()<<std::endl;
    return 0;
}
