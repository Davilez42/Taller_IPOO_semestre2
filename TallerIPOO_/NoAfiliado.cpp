#include "NoAfiliado.h"

NoAfiliado::NoAfiliado() {
      efectivo = 0;
      devuelta = 0;
      descuento = 0;
}

NoAfiliado::~NoAfiliado() {
      //dtor
}

void NoAfiliado::setEfectivo() {
      cout<<"Ingrese el efectivo:";
      cin>>efectivo;
}


void NoAfiliado::setCalcularTotalCompra() {

      if(getValor_Compra()>100000){
             descuento = getValor_Compra()*0.1;
            subtotal_compra = getValor_Compra()-descuento;
      }
      else{
        descuento = 0;
        subtotal_compra = getValor_Compra();

      }
IVA = subtotal_compra*0.19;
total =  subtotal_compra+IVA;
}

int NoAfiliado::getDevuelta(){
devuelta = efectivo-total;
return devuelta;
}



int NoAfiliado::getDescuento(){return descuento;}
string NoAfiliado::getInfo(){
return "\nTipo:CLIENTE NO AFILIADO\n" +Cliente::getInfo() +
       "\nValor del bono: No aplica " +
       "\nDescuento aplicado: 10%"+
       "\nvalor descuento: "+ to_string(descuento)+
       "\nSubtotal de la compra:" + to_string(subtotal_compra)+
       "\nIVA: " + to_string(IVA) +
       "\nTotal a pagar: " + to_string(total) +
       "\nMonto con el que paga el cliente: " + to_string(efectivo)+
       "\nDevuelta: " + to_string(getDevuelta()) + "\n";
}
