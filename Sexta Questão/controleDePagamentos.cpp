#include <iostream>
#include <string>
#include "controleDePagamentos.h"

using namespace std;

ControleDePagamentos::ControleDePagamentos()
{
        for(int i =0; i < 100; i++)
        {
                this->pagamentos[i] = Pagamento();
        }

}

double ControleDePagamentos::calculaTotalDePagamentos()
{
    double total = 0;

    for(int i = 0; i < 100; i++)
    {
            total += this->pagamentos[i].getValorPagamento();
    }

    return total;
}

bool ControleDePagamentos::existePagamentoParaFuncionario(string nomeDoFuncionario)
{
        for(int i = 0; i < 100; i++)
        {
                if(this->pagamentos[i].getNomeDoFuncionario() == nomeDoFuncionario)
                {
                        return true;
                }
        }

        return false;
}

void ControleDePagamentos::setPagamento(int pagamento_n, string nomeDoFuncionario, double valorPagamento)
{
        this->pagamentos[pagamento_n].setNomeDoFuncionario(nomeDoFuncionario);
        this->pagamentos[pagamento_n].setValorPagamento(valorPagamento);
}

Pagamento ControleDePagamentos::getPagamento(int pagamento_n)
{
        return (this->pagamentos[pagamento_n]);
}
