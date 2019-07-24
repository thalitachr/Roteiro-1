#ifndef CONTROLEDEGASTOS_H_INCLUDED
#define CONTROLEDEGASTOS_H_INCLUDED
#include <iostream>
#include <string>
#include "despesa.h"

class ControleDeGastos{
    private:
        Despesa despesas[100];
    public:
        ControleDeGastos();

        void setDespesa(Despesa despesa, int pos);

        Despesa getDespesa(int pos);

        double getCalculaTotalDespesas();
        bool existeDespesaDoTipo(std::string tipoDeGastos);
};

#endif // CONTROLEDEGASTOS_H_INCLUDED
