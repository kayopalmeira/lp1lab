#include <iostream>
#include "Data.h"

int main()
{
    Data novadata(29,11,2018);
    Data outradata(7,2,2019);

    std::cout<<novadata.getDia()<<" de "<<novadata.getMes()<<" de "<<novadata.getAno()<<std::endl;
    novadata.avancarDia();
    std::cout<<novadata.getDia()<<" de "<<novadata.getMes()<<" de "<<novadata.getAno()<<std::endl;
    std::cout<<outradata.getDia()<<" de "<<outradata.getMes()<<" de "<<outradata.getAno()<<std::endl;
    outradata.setMes(9);
    std::cout<<outradata.getDia()<<" de "<<outradata.getMes()<<" de "<<outradata.getAno()<<std::endl;

    return 0;
}
