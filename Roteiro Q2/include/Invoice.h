#ifndef INVOICE_H
#define INVOICE_H
#include <string>

class Invoice{
    private:
        int numero;
        std::string descricao;
        int quantidade;
        float preco;
    public:
        Invoice(int num, std::string desc, int quant, float prec);
        int getNumero();
        std::string getDescricao();
        int getQuantidade();
        float getPreco();
        void setNumero(int num);
        void setDescricao(std::string desc);
        void setQuantidade(int quant);
        void setPreco(float prec);
        float getInvoiceAmount();
};

#endif // INVOICE_H
