#include <iostream>
#include "ControledeGastos.h"
#include <string>>

int main()

{
    Despesa conta1;
    Despesa conta2;
    ControledeGastos mes;
    std::string tipo;

    conta1.setTipodeGasto("iptu");
    conta1.setValor(100.00);

    conta2.setTipodeGasto("luz");
    conta2.setValor(100.00);



    mes.setDespesas(conta1);
    mes.setDespesas(conta2);



    std::cout<<mes.calculaTotaldeDespesas()<<std::endl;

    std::cout<<"Digite o tipo de despesa:";

    std::cin>>tipo;

    if(mes.existeTipo(tipo)==true){
        std::cout<<"Sim"<<std::endl;
    }   else{
        std::cout<<"Nao"<<std::endl;
        }


    return 0;

}

