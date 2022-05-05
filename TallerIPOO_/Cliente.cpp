#include "Cliente.h"
#include <iostream>
#include "Fecha.h"
using namespace std;

Cliente::Cliente() {
      nombre = "--";
      apellido = "--";
      fecha_compra = "";
      ID = 0;
      valor_Compra = 0;
      subtotal_compra = 0;


}

Cliente::~Cliente() {
}

void Cliente::setID(){
cout<<"Porfavor Ingrese el ID:";
cin>>ID;
}
void  Cliente::setNombre(){
fflush(stdin);
cout<<"Digite el Nombre:";
getline(cin,nombre);
}

void  Cliente::setApellido(){
    fflush(stdin);
cout<<"Digite el Apellido:";
getline(cin,apellido);
}

void Cliente::setValorCompra(){
cout<<"Porfavor Ingrese el Valor de la compra:";
cin>>valor_Compra;

}
string Cliente::getCalcularFecha_compra(){
fecha_compra += getFecha();
return fecha_compra;
}


int     Cliente::getID(){return ID;}
string  Cliente::getNombre(){return nombre;}
string  Cliente::getApellido(){return apellido;}
int  Cliente::getTotal_Compra(){return total;}
int  Cliente::getValor_Compra(){return valor_Compra;}


string Cliente::getInfo()
{
    return  "\nFecha:" + getCalcularFecha_compra() +
            "\nID:" + to_string(ID) +
            "\nNombre: " + nombre +
            "\nApellido: " + apellido +
            "\nValor Compra: " + to_string(valor_Compra);
}
