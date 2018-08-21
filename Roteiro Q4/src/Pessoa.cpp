#include "Pessoa.h"

Pessoa::Pessoa(std::string nom)
{
    nome = nom;
    idade = 0;
    telefone = 0;

}
Pessoa::Pessoa(std::string nom, int ida, int tel)
{
    nome = nom;
    idade = ida;
    telefone = tel;
}
std::string Pessoa::getNome(){
    return nome;
}
int Pessoa::getIdade(){
    return idade;
}
int Pessoa::getTelefone(){
    return telefone;
}
void Pessoa::setNome(std::string nom){
    nome = nom;
}
void Pessoa::setIdade(int ida){
    idade = ida;
}
void Pessoa::setTelefone(int tel){
    telefone = tel;
}
