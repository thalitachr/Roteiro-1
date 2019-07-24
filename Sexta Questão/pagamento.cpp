#include <iostream>
#include <string>
#include "pagamento.h"

using namespace std;

Pagamento::Pagamento()
{
    this->nomeDoFuncionario = "";
    this->valorPagamento = 0.0;
}
Pagamento::Pagamento(string nomeDoFuncionario, double valorPagamento)
{
    this->setNomeDoFuncionario(nomeDoFuncionario);
    this->setValorPagamento(valorPagamento);
}

void Pagamento::setNomeDoFuncionario(string nomeDoFuncionario)
{
    this->nomeDoFuncionario = nomeDoFuncionario;
}
void Pagamento::setValorPagamento(double valorPagamento)
{
    this->valorPagamento = valorPagamento;
}

string Pagamento::getNomeDoFuncionario()
{
    return nomeDoFuncionario;
}
double Pagamento::getValorPagamento()
{
    return valorPagamento;
}
