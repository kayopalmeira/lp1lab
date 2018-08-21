#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>


class Pagamento
{
    private:
    double valorPagamento;
    std::string nomeDoFuncionario;

    public:
    Pagamento();

    double getValorPagamento();
    void setValorPagamento(double val);

    std::string getNomeDoFuncionario();
    void setNomeDoFuncionario(std::string nome);
};

#endif // PAGAMENTO_H
