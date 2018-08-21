#include "Despesa.h"

Despesa::Despesa()
{
    valor=0;
    tipodegasto="";
}

double Despesa::getValor(){
    return valor;
};

std::string Despesa::getTipodegasto(){
    return tipodegasto;
};

void Despesa::setValor(double val){
    valor=val;
};

void Despesa::setTipodeGasto(std::string tipo){
    tipodegasto=tipo;
};
