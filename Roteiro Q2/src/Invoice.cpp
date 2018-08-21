#include "Invoice.h"

Invoice::Invoice(int num, std::string desc, int quant, float prec){
    numero = num;
    descricao = desc;
    quantidade = quant;
    preco = prec;
}
int Invoice::getNumero(){
    return numero;
}
std::string Invoice::getDescricao(){
    return descricao;
}
int Invoice::getQuantidade(){
    return quantidade;
}
float Invoice::getPreco(){
    return preco;
}
void Invoice::setNumero(int num){
    numero = num;
}
void Invoice::setDescricao(std::string desc){
    descricao = desc;
}
void Invoice::setQuantidade(int quant){
    quantidade = quant;
}
void Invoice::setPreco(float prec){
    preco = prec;
}
float Invoice::getInvoiceAmount(){
    float aux1 = preco;
    int aux2 = quantidade;
    if(preco<0)aux1 = 0;
    if(quantidade<0)aux1 = 0;
    return aux1 * aux2;
}
