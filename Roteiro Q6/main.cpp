#include <iostream>
#include <string>
#include "ControleDePagamentos.h"

int main()
{
    Pagamento pagamento1;
    Pagamento pagamento2;
    ControleDePagamentos mes;
    std::string nome;

    pagamento1.setNomeDoFuncionario("Kaio");
    pagamento2.setNomeDoFuncionario("Kayo");
    pagamento1.setValorPagamento(100.00);
    pagamento2.setValorPagamento(800.00);

    mes.setPagamentos(pagamento1);
    mes.setPagamentos(pagamento2);

    std::cout<<mes.calculaTotalDePagamentos()<<std::endl;
    std::cout<<"Digite o nome do funcionario: ";
    std::cin>>nome;
    if(mes.existePagamentoParaFuncionario(nome)==true){
        std::cout<<"Existe"<<std::endl;
    }   else{
        std::cout<<"Nao existe"<<std::endl;
        }
}
