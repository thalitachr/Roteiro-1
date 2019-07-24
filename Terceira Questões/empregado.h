#ifndef EMPREGADO_H_INCLUDED
#define EMPREGADO_H_INCLUDED
#include <iostream>
#include <string>

class Empregado{
    private:
        std::string nome;
        std::string sobrenome;
        double salario;
    public:
        Empregado();
        Empregado(std::string nome, std::string sobrenome, double salario);

        void setNome(std::string nome);
        void setSobrenome(std::string sobrenome);
        void setSalario(double salario);

        std::string getNome();
        std::string getSobrenome();
        double getSalario();

};


#endif // EMPREGADO_H_INCLUDED
