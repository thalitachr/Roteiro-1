#include <string>
#include <iostream>
#include "pessoa.h"

using namespace std;

Pessoa::Pessoa()
{
    this->setNome("");
    this->setTelefone("");
    this->setIdade(0);
}
Pessoa::Pessoa(string nome)
{
    this->setNome(nome);
    this->setTelefone("");
    this->setIdade(0);
}
Pessoa::Pessoa(string nome, string telefone, int idade)
{
    this->setNome(nome);
    this->setTelefone(telefone);
    this->setIdade(idade);
}

void Pessoa::setNome(string nome)
{
    this->nome = nome;
}
void Pessoa::setTelefone(string telefone)
{
    this->telefone = telefone;
}
void Pessoa::setIdade(int idade)
{
    this->idade = idade;
}

string Pessoa::getNome()
{
    return nome;
}
string Pessoa::getTelefone()
{
    return telefone;
}
int Pessoa::getIdade()
{
    return idade;
}
