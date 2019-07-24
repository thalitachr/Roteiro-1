#include <iostream>
#include <string>
#include "pessoa.h"

using namespace std;

int main()
{
   Pessoa pessoa_0, pessoa_1, pessoa_2;

   pessoa_0 = Pessoa();
   pessoa_1 = Pessoa("Pedro");
   pessoa_2 = Pessoa("Mavis", "9999-3333", 20);

   cout << endl << "--------Pessoa 0-------------- " << endl << endl;

   cout << "Nome: " << pessoa_0.getNome() << endl;
   cout << "Idade: " << pessoa_0.getIdade() << endl;
   cout << "Telefone: " << pessoa_0.getTelefone() << endl;

   cout << endl << "--------Pessoa 1-------------- " << endl << endl;

   cout << "Nome: " << pessoa_1.getNome() << endl;
   cout << "Idade: " << pessoa_1.getIdade() << endl;
   cout << "Telefone: " << pessoa_1.getTelefone() << endl;

   cout << endl << "---------Pessoa 2------------- " << endl << endl;

   cout << "Nome: " << pessoa_2.getNome() << endl;
   cout << "Idade: " << pessoa_2.getIdade() << endl;
   cout << "Telefone: " << pessoa_2.getTelefone() << endl;
}
