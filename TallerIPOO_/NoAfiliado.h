#ifndef NOAFILIADO_H
#define NOAFILIADO_H
#import "Cliente.h"
#import "Cortesia.h"
class NoAfiliado : public Cliente
{
    public:

        NoAfiliado();
        virtual ~NoAfiliado();
        void setEfectivo();
        int getEfectivo();
        void setCalcularTotalCompra();//metodo polimorfismos
        int getDevuelta();
         int getDescuento();
        string getInfo();


    protected:
        int efectivo;
        int devuelta;
        int descuento;
    private:
        Cortesia xc;
};

#endif // NOAFILIADO_H
