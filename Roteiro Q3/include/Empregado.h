#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <string>


class Empregado
{
    private:
    std::string nome;
    std::string sobrenome;
    float salario;

    public:
    Empregado(std::string nom, std::string sobr, float sal);
    std::string getNome();
    std::string getSobrenome();
    float getSalario();
    void setNome(std::string nom);
    void setSobrenome(std::string sobr);
    void setSalario(float sal);
    float getSalarioPercentage();
};

#endif // EMPREGADO_H
