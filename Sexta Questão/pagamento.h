#ifndef PAGAMENTO_H_INCLUDED
#define PAGAMENTO_H_INCLUDED
#include <iostream>
#include <string>

class Pagamento{
    private:
        double valorPagamento;
        std::string nomeDoFuncionario;
    public:
        Pagamento();
        Pagamento(std::string nomeDoFuncionario, double valorPagamento);

        void setValorPagamento(double valorPagamento);
        void setNomeDoFuncionario(std::string nomeDoFuncionario);

        double getValorPagamento();
        std::string getNomeDoFuncionario();
};

#endif // PAGAMENTO_H_INCLUDED
