#ifndef CONTROLEDEPAGAMENTOS_H_INCLUDED
#define CONTROLEDEPAGAMENTOS_H_INCLUDED
#include <iostream>
#include <string>
#include "pagamento.h"

class ControleDePagamentos{
    private:
        Pagamento pagamentos[100];
    public:
        ControleDePagamentos();

        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario(std::string nomeDoFuncionario);

        void setPagamento(int pagamento_n, std::string nomeDoFuncionario, double valorPagamento);
        Pagamento getPagamento(int pagamento_n);
};

#endif // CONTROLEDEPAGAMENTOS_H_INCLUDED
