#ifndef DESPESA_H_INCLUDED
#define DESPESA_H_INCLUDED
#include <iostream>
#include <string>

class Despesa{
    private:
        std::string tipoDeGastos;
        double valor;
    public:
        Despesa();
        Despesa(std::string tipoDeGastos, double valor);

        void setTipoDeGastos(std::string tipoDeGastos);
        void setValor(double valor);

        std::string getTipoDeGastos();
        double getValor();
};

#endif // DESPESA_H_INCLUDED
