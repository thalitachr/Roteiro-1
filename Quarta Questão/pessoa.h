#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED
#include <iostream>
#include <string>

class Pessoa{
    private:
        std::string nome;
        std::string telefone;
        int idade;
    public:
        Pessoa();
        Pessoa(std::string nome);
        Pessoa(std::string nome, std::string telefone, int idade);

        void setNome(std::string nome);
        void setTelefone(std::string telefone);
        void setIdade(int idade);

        std::string getNome();
        std::string getTelefone();
        int getIdade();
};

#endif // PESSOA_H_INCLUDED
