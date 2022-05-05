#include "Cortesia.h"
#include <iostream>
using namespace std;
Cortesia::Cortesia() {
      bonus = 0;
}

Cortesia::~Cortesia() {
      //dtor
}
void Cortesia::setBonus(){
    cout<<"Digite el valor del bonus:";
    cin>>bonus;

    if(bonus<getValor_Compra()){
        cout<<"Digite el restante en efectivo:";
        cin>>efectivo;
    }else{
    if(bonus>getValor_Compra()){
       cout<<"El valor del bonus debe ser igual o menor del valor de la compra"<<endl;
        system("pause");
    setBonus();
       }
    }
}
int Cortesia::getBonus(){
    return bonus;
}

void Cortesia::setCalcularTotalCompra(){//metodo que aplica el polimorfismo
subtotal_compra = getValor_Compra();
IVA = 0;
total =  subtotal_compra+IVA;
}


int Cortesia::getDevuelta(){
    int diferencia = subtotal_compra - bonus;
devuelta = efectivo-diferencia;
return devuelta;
}

string Cortesia::getInfo(){

return "\n Tipo:CLIENTE CORTESIA\n" +Cliente::getInfo() +
       "\nValor del bono: " + to_string(bonus) +
       "\nDescuento aplicado: No aplica"  +
       "\nvalor descuento:0"+
       "\nSubtotal de la compra:" + to_string(subtotal_compra)+
       "\nIVA: " + to_string(IVA) +
       "\nTotal: " + to_string(total) +
        "\nEfectivo: " + to_string(efectivo) +
        "\nDevuelta: " + to_string(getDevuelta())+ "\n";
}
