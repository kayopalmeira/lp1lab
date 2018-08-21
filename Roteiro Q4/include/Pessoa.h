#ifndef PESSOA_H
#define PESSOA_H
#include <string>


class Pessoa
{
    private:
    std::string nome;
    int idade;
    int telefone;

    public:
    Pessoa(std::string nom);
    Pessoa(std::string nom, int ida, int tel);
    std::string getNome();
    int getIdade();
    int getTelefone();
    void setNome(std::string nom);
    void setIdade(int ida);
    void setTelefone(int tel);
};

#endif // PESSOA_H
