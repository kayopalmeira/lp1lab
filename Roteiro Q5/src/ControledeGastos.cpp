#include "ControledeGastos.h"

ControledeGastos::ControledeGastos(){

}

void ControledeGastos::setDespesas(Despesa desp){
    static int i;
    despesas[i++]=desp;
};

double ControledeGastos::calculaTotaldeDespesas(){
    double total=0;
    for(int i=0;i<100;i++){
        total+=despesas[i].getValor();
    }
    return total;
};

bool ControledeGastos::existeTipo(std::string tipo){
    int flag=0;
    for(int i=0;i<100;i++){
        if(tipo==despesas[i].getTipodegasto())
            flag=1;
        }

    if(flag==1){
        return true;
    }   else{
            return false;
        }
};
