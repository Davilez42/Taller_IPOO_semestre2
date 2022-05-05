#ifndef CORTESIA_H
#define CORTESIA_H
#include "Cliente.h"


class Cortesia:public Cliente
{
    public:

        Cortesia();
        virtual ~Cortesia();
        void setBonus();
        int getBonus();
        void setCalcularTotalCompra();//metodo polimoffismoo
        string getInfo();
        int getDevuelta();

    protected:
       int efectivo;
       int devuelta;
    private:
        int bonus;

};

#endif // CORTESIA_H
