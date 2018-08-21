#include "ControleDePagamentos.h"

ControleDePagamentos::ControleDePagamentos()
{
    //ctor
}

void ControleDePagamentos::setPagamentos(Pagamento pag){
    static int i;
        pagamentos[i++] = pag;
}

double ControleDePagamentos::calculaTotalDePagamentos(){
    double total=0.0;
    for(int i=0;i<100;i++){
        total+=pagamentos[i].getValorPagamento();
    }
    return total;
}

bool ControleDePagamentos::existePagamentoParaFuncionario(std::string nome){
    int flag=0;
    for(int i=0;i<100;i++){
        if(pagamentos[i].getNomeDoFuncionario() == nome){
            flag++;
        }
    }
    if(flag>0){
        return true;
    } else{
        return false;
        }
}
