#include "Pagamento.h"

Pagamento::Pagamento(){
    valorPagamento = 0;
    nomeDoFuncionario = "";
}

double Pagamento::getValorPagamento(){
    return valorPagamento;
}
std::string Pagamento::getNomeDoFuncionario(){
    return nomeDoFuncionario;
}
void Pagamento::setValorPagamento(double val){
    valorPagamento = val;
}
void Pagamento::setNomeDoFuncionario(std::string nome){
    nomeDoFuncionario = nome;
}
