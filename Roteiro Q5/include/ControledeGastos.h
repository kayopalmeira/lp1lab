#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"


class ControledeGastos
{
    private:
    Despesa despesas[100];

    public:
    ControledeGastos();
    void setDespesas(Despesa desp);
    double calculaTotaldeDespesas();
    bool existeTipo(std::string tipo);

};

#endif // CONTROLEDEGASTOS_H
