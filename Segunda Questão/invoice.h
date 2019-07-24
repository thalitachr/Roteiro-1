#ifndef INVOICE_H_INCLUDED
#define INVOICE_H_INCLUDED
#include <iostream>
#include <string>

class Invoice{
    private:
        std::string descricao;
        double preco;
        int numero;
        int quantidade;
    public:
        Invoice();
        Invoice(std::string descricao, double preco, int numero, int quantidade);

        double getInvoiceAmount();

        void setDescricao(std::string descricao);
        void setPreco(double preco);
        void setNumero(int numero);
        void setQuantidade(int quantidade);

        std::string getDescricao();
        double getPreco();
        int getNumero();
        int getQuantidade();
};

#endif // INVOICE_H_INCLUDED
