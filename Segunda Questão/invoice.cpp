#include <iostream>
#include <string>
#include "invoice.h"

using namespace std;

Invoice::Invoice()
{
    this->setDescricao("");
    this->setPreco(0.0);
    this->setNumero(0);
    this->setQuantidade(0);
}
Invoice::Invoice(string descricao, double preco, int numero, int quantidade)
{
    this->setDescricao(descricao);
    this->setPreco(preco);
    this->setNumero(numero);
    this->setQuantidade(quantidade);
}

double Invoice::getInvoiceAmount()
{
    return quantidade * preco;
}

void Invoice::setDescricao(string descricao)
{
    this->descricao = descricao;
}
void Invoice::setPreco(double preco)
{
    if(preco < 0)
    {
        this->preco = 0.0;

    }
    else
    {
        this->preco = preco;
    }
}
void Invoice::setNumero(int numero)
{
    this->numero = numero;
}
void Invoice::setQuantidade(int quantidade)
{
    if(quantidade < 0)
    {
        this->quantidade = 0;
    }
    else
    {
        this->quantidade = quantidade;
    }
}

string Invoice::getDescricao()
{
    return descricao;
}
double Invoice::getPreco()
{
    return preco;
}
int Invoice::getNumero()
{
    return numero;
}
int Invoice::getQuantidade()
{
    return quantidade;
}
