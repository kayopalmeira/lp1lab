#ifndef DESPESA_H
#define DESPESA_H
#include <string>

class Despesa
{
    private:
    double valor;
    std::string tipodegasto;

    public:
    Despesa();

    double getValor();
    void setValor(double val);

    std::string getTipodegasto();
    void setTipodeGasto( std::string tipo);
};

#endif // DESPESA_H
