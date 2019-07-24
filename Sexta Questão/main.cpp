#include <iostream>
#include <string>
#include "controleDePagamentos.h"

using namespace std;

int main()
{
    ControleDePagamentos pagamento;

    pagamento.setPagamento(0, "Ana", 1000.00);
    pagamento.setPagamento(1, "Mavis", 500.00);

    cout << "----------Payment 0---------- " << endl << endl;

    cout << "Empregado: " << (pagamento.getPagamento(0)).getNomeDoFuncionario() << endl;
    cout << "Valor do Pagamento: " << (pagamento.getPagamento(0)).getValorPagamento() << endl << endl;

    cout << "----------Payment 1---------- " << endl << endl;

    cout << "Empregado: " << (pagamento.getPagamento(1)).getNomeDoFuncionario() << endl;
    cout << "Valor do Pagamento: " << (pagamento.getPagamento(1)).getValorPagamento() << endl << endl;

    cout << "Pagamento Total: " << pagamento.calculaTotalDePagamentos() << endl << endl;

    cout << "Pagamento para 'Ana': " << pagamento.existePagamentoParaFuncionario("Ana") << endl;
    cout << "Pagamento para 'Mavis': " << pagamento.existePagamentoParaFuncionario("Mavis") << endl;
    cout << "Pagamento para 'Alguem': " << pagamento.existePagamentoParaFuncionario("Alguem") << endl;
}
