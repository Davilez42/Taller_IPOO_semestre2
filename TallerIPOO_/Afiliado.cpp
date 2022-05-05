#include "Afiliado.h"
#include <iostream>
using namespace std;

Afiliado::Afiliado() {

      puntos = 0;
}

Afiliado::~Afiliado() {
}




void Afiliado::setCalcularTotalCompra(){
descuento = getValor_Compra()*0.2;
puntos+= getValor_Compra()*0.1;

subtotal_compra = getValor_Compra()-descuento;
IVA = subtotal_compra*0.19;
total =  subtotal_compra+IVA;
}




string Afiliado::getInfo(){

return "\nTipo:CLIENTE AFILIADO\n" +Cliente::getInfo() +
       "\nValor del bono: No aplica " +
       "\nDescuento aplicado: 20%"+
       "\nvalor descuento: "+ to_string(descuento)+
       "\nSubtotal de la compra:" + to_string(subtotal_compra)+
       "\nIVA: " + to_string(IVA) +
       "\nTotal a pagar: " + to_string(total) +
       "\nMonto con el que paga el cliente: " + to_string(efectivo)+
       "\nDevuelta: " + to_string(getDevuelta()) + "\n";
}
