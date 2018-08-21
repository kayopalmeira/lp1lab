#include "Empregado.h"

Empregado::Empregado(std::string nom, std::string sobr, float sal)
{
    nome = nom;
    sobrenome = sobr;
    salario = sal;
}
std::string Empregado::getNome(){
    return nome;
}
std::string Empregado::getSobrenome(){
    return sobrenome;
}
float Empregado::getSalario(){
    return salario;
}
void Empregado::setNome(std::string nom){
    nome = nom;
}
void Empregado::setSobrenome(std::string sobr){
    sobrenome = sobr;
}
void Empregado::setSalario(float sal){
    salario = sal;
}
float Empregado::getSalarioPercentage(){
    return salario*=1.1;
}
