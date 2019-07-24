#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
#include <iostream>
#include <string>

class Data{
    private:
        int dia;
        int mes;
        int ano;
    public:
        Data();
        Data(int dia, int mes, int ano);

        void setDia(int dia, int mes);
        void setMes(int mes);
        void setAno(int ano);

        int getDia();
        int getMes();
        int getAno();
};

#endif // DATA_H_INCLUDED
