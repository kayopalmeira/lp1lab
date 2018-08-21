#include "Data.h"

    Data::Data(int d,int m,int a){
        dia=d;
        mes=m;
        ano=a;
    }

    int Data::getDia(){
        return dia;
    };
    int Data::getMes(){
        return mes;
    };
    int Data::getAno(){
        return ano;
    };
    void Data::setDia(int d){
        dia=d;
    };
    void Data::setMes(int m){
        mes=m;
    };
    void Data::setAno(int a){
        ano=a;
    };

    void Data::avancarDia(){

        if(dia<31)
            dia++;
        else if(dia>=31){
            dia=1;
            mes++;
            if(mes>=12){
            mes=1;
            ano++;
            }
        }
    }
