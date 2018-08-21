#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"


class ControleDePagamentos
{
    private:
    Pagamento pagamentos[100];

    public:
    ControleDePagamentos();

    void setPagamentos(Pagamento pag);

    double calculaTotalDePagamentos();
    bool existePagamentoParaFuncionario(std::string nome);
};

#endif // CONTROLEDEPAGAMENTOS_H
