#include <iostream>
#include <string>
#include "controleDeGastos.h"

using namespace std;

ControleDeGastos::ControleDeGastos()
{
    for(int i = 0; i < 100; i++)
    {
        this->despesas[i] = Despesa("", 0);
    }
}

void ControleDeGastos::setDespesa(Despesa despesa, int pos)
{
    this->despesas[pos] = despesa;
}

Despesa ControleDeGastos::getDespesa(int pos)
{
    return despesas[pos];
}

double ControleDeGastos::getCalculaTotalDespesas()
{
    double total =0;

    for(int i = 0; i < 100; i++)
    {
        total += this->despesas[i].getValor();
    }
    return total;
}

bool ControleDeGastos::existeDespesaDoTipo(string tipoDeGastos)
{
    for(int i = 0; i < 100; i++)
    {
        if(this->despesas[i].getTipoDeGastos() == tipoDeGastos)
        {
            return true;
        }
    }
    return false;
}
