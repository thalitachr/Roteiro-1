#include <iostream>
#include <string>
#include "controleDeGastos.h"

using namespace std;

int main()
{
    ControleDeGastos despesas_0;

    Despesa paramDespesa;

    paramDespesa = Despesa("Escola", 200);
    despesas_0.setDespesa(paramDespesa, 0);

    paramDespesa = Despesa("Aluguel", 900);
    despesas_0.setDespesa(paramDespesa, 1);

    paramDespesa = Despesa("Conta de agua", 5000);
    despesas_0.setDespesa(paramDespesa, 5);

    cout << "----------Despesa 0----------" << endl << endl;

    cout << "Tipo de Gasto: " << (despesas_0.getDespesa(0)).getTipoDeGastos() << endl;
    cout << "Valor da Despesa: " << (despesas_0.getDespesa(0)).getValor() << endl << endl;

    cout << "----------Despesa 1----------" << endl << endl;

    cout << "Tipo de Gasto: " << (despesas_0.getDespesa(1)).getTipoDeGastos() << endl;
    cout << "Valor da Despesa: " << (despesas_0.getDespesa(1)).getValor() << endl << endl;

    cout << "----------Despesa 5----------" << endl << endl;

    cout << "Tipo de Gasto: " << (despesas_0.getDespesa(5)).getTipoDeGastos() << endl;
    cout << "Valor da Despesa: " << (despesas_0.getDespesa(5)).getValor() << endl << endl;

    cout << "Valor Total:" << despesas_0.getCalculaTotalDespesas() << endl << endl;

    cout << "Pesquisa" << endl << endl;

    cout << "Pesquisando 'Aluguel': " << despesas_0.existeDespesaDoTipo("Aluguel") << endl;
    cout << "Pesquisando 'Escola': " << despesas_0.existeDespesaDoTipo("Escola") << endl;
    cout << "Pesquisando 'Conta de agua': " << despesas_0.existeDespesaDoTipo("Conta de agua") << endl;
    cout << "Pesquisando 'Comida': " << despesas_0.existeDespesaDoTipo("Comida") << endl;

}
