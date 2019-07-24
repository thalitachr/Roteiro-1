#include <iostream>
#include <string>
#include "empregado.h"

using namespace std;

Empregado::Empregado()
{
    setNome("");
    setSobrenome("");
    setSalario(0);
}
Empregado::Empregado(string nome, string sobrenome, double salario)
{
    setNome(nome);
    setSobrenome(sobrenome);
    setSalario(salario);
}

void Empregado::setNome(string nome)
{
    this->nome = nome;
}
void Empregado::setSobrenome(string sobrenome)
{
    this->sobrenome = sobrenome;
}
void Empregado::setSalario(double salario)
{
    this->salario = salario;
}

string Empregado::getNome()
{
    return nome;
}
string Empregado::getSobrenome()
{
    return sobrenome;
}
double Empregado::getSalario()
{
    return salario;
}
