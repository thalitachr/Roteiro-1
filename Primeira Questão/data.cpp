#include <iostream>
#include <string>
#include "data.h"

using namespace std;

Data::Data()
{
    this->dia = 1;
    this->mes = 1;
    this->ano = 1;
}
Data::Data(int dia, int mes, int ano)
{
    this->setDia(dia, mes);
    this->setMes(mes);
    this->setAno(ano);
}

void Data::setDia(int dia, int mes)
{
    if(mes == 2)
    {
        if(dia < 1 || dia > 28)
        {
            this->dia = 1;
        }
        else
        {
            this->dia = dia;
        }
    }
    else if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 ||
       mes == 10 || mes == 12)
    {
        if(dia < 1 || dia > 31)
        {
            this->dia = 1;
        }
        else
        {
            this->dia = dia;
        }
    }
    else if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        if(dia < 1 || dia > 30)
        {
            this->dia = 1;
        }
        else
        {
            this->dia = dia;
        }
    }
}
void Data::setMes(int mes)
{
    if(mes < 1 || mes > 12)
    {
        this->mes = 1;
    }
    else
    {
        this->mes = mes;
    }
}
void Data::setAno(int ano)
{
    if(ano < 1)
    {
        this->ano = 1;
    }
    else
    {
        this->ano = ano;
    }
}

int Data::getDia()
{
    return dia;
}
int Data::getMes()
{
    return mes;
}
int Data::getAno()
{
    return ano;
}
