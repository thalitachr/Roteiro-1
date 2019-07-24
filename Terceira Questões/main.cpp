#include <iostream>
#include <string>
#include "empregado.h"

using namespace std;

int main()
{
    Empregado empregado_0, empregado_1, empregado_2;

    empregado_0 = Empregado();
    empregado_1 = Empregado("Pedro", "Feitosa", 15000);
    empregado_2 = Empregado("Mavis", "Tail", 40000);

    cout << "----------empregado 0----------" << endl << endl;

    cout << "Primeiro nome: " << empregado_0.getNome() << endl;
    cout << "Sobrenome: " << empregado_0.getSobrenome() << endl;
    cout << "Salario: " << empregado_0.getSalario() << endl << endl;

    cout << "----------empregado 1----------" << endl << endl;

    cout << "Primeiro nome: " << empregado_1.getNome() << endl;
    cout << "Sobrenome: " << empregado_1.getSobrenome() << endl;
    cout << "Salario: " << empregado_1.getSalario() << endl << endl;

    cout << "----------empregado 2----------" << endl << endl;

    cout << "Primeiro nome: " << empregado_2.getNome() << endl;
    cout << "Sobrenome: " << empregado_2.getSobrenome() << endl;
    cout << "Salario: " << empregado_2.getSalario() << endl << endl;

}
