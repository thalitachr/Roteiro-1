#include <iostream>
#include <string>
#include "despesa.h"

using namespace std;

Despesa::Despesa()
{
    this->tipoDeGastos = "";
    this->valor = 0.0;
}
Despesa::Despesa(string tipoDeGastos, double valor)
{
    this->tipoDeGastos = tipoDeGastos;
    this->valor = valor;
}

void Despesa::setTipoDeGastos(string tipoDeGastos)
{
    this->tipoDeGastos = tipoDeGastos;
}
void Despesa::setValor(double valor)
{
    this->valor = valor;
}

string Despesa::getTipoDeGastos()
{
    return tipoDeGastos;
}
double Despesa::getValor()
{
    return valor;
}
