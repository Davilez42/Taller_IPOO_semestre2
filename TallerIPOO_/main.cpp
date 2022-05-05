
//Estudiante1 :jose david suarez cardona
//codigo : 202067548
//Estudiante2 :Oscar Fernando Rivera Pardo
//codigo : 202067730


#include <iostream>
#include "Cortesia.h"
#include "NoAfiliado.h"
#include "Afiliado.h"
#include "vector"
#include "Cliente.h"
#include <windows.h>
using namespace std;
//Vectores
vector <Cortesia> listaClientes_Cortesia;
vector <NoAfiliado> listaClientes_Noafiliados;
vector <Afiliado> listaClientes_Afiliados;
//prototipos funciones
void menuCajero();
void clienteCortesia();
void clienteNoafiliado();
void clienteAfiliado();
void acercaDe();
void gotoxy(int,int);
///definicion de funciones
void clienteAfiliado(){
    system("cls");
Afiliado obj_cliente;
Cliente *obAfi = &obj_cliente;//creo un apuntador y paso como referencia el objetos para aplicar polimorfismo

cout<<"Ingresar Datos"<<endl;
obj_cliente.setID();
obj_cliente.setNombre();
obj_cliente.setApellido();
obj_cliente.setValorCompra();
obAfi->setCalcularTotalCompra();
cout<<"----------------------------------------------"<<endl;
cout<<"Total a pagar :"<<obj_cliente.getTotal_Compra()<<endl;
cout<<"----------------------------------------------"<<endl;

obj_cliente.setEfectivo();


listaClientes_Afiliados.push_back(obj_cliente);

system("cls");
cout<<obj_cliente.getInfo();
system("pause");
}

void clienteCortesia(){
    system("cls");
Cortesia obj_cliente;
Cliente *obCort = &obj_cliente;//creo un apuntador y paso como referencia el objetos para aplicar polimorfismo

cout<<"Ingresar Datos"<<endl;
obj_cliente.setID();
obj_cliente.setNombre();
obj_cliente.setApellido();
obj_cliente.setValorCompra();
obj_cliente.setBonus();
obCort->setCalcularTotalCompra();
listaClientes_Cortesia.push_back(obj_cliente);
system("cls");
cout<<obj_cliente.getInfo();
system("pause");

}


void clienteNoafiliado(){
    system("cls");
NoAfiliado obj_cliente;
Cliente *objNoAfi = &obj_cliente;//creo un apuntador y paso como referencia el objetos para aplicar polimorfismo

cout<<"Ingresar Datos"<<endl;
obj_cliente.setID();
obj_cliente.setNombre();
obj_cliente.setApellido();
obj_cliente.setValorCompra();
objNoAfi->setCalcularTotalCompra();

cout<<"----------------------------------------------"<<endl;
cout<<"Total a pagar :"<<obj_cliente.getTotal_Compra()<<endl;
cout<<"----------------------------------------------"<<endl;

cout<<endl;
obj_cliente.setEfectivo();



listaClientes_Noafiliados.push_back(obj_cliente);
system("cls");
cout<<obj_cliente.getInfo();
system("pause");

}


void gotoxy(int x,int y){
     HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
}

void acercaDe(){

      system("cls");
      HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(hconsole,9);


gotoxy(18,1);cout<<"        **  "<<endl;
gotoxy(18,2);cout<<"     *****                       * "<<endl;
gotoxy(18,3);cout<<"    *  ***                      ** "<<endl;
gotoxy(18,4);cout<<"       ***                      ** "<<endl;
gotoxy(18,5);cout<<"      *  **    **   ****      ******** ****   ***  ****              **** "<<endl;
gotoxy(18,6);cout<<"      *  **     **    ***    ******** * ***  * **** **** * ***      * **** * "<<endl;
gotoxy(18,7);cout<<"     *    **    **     ****     **   *   ****   **   **** * ***    **  ****  "<<endl;
gotoxy(18,8);cout<<"     *    **    **      **      **  **    **    **       *   ***  ****   "<<endl;
gotoxy(18,9);cout<<"    *      **   **      **      **  **    **    **      **    ***   ***  "<<endl;
gotoxy(18,10);cout<<"    *********   **      **      **  **    **    **      ********      ***  "<<endl;
gotoxy(18,11);cout<<"   *        **  **      **      **  **    **    **      *******         *** "<<endl;
gotoxy(18,12);cout<<"   *        **  **      **      **  **    **    **      **         ****  **  "<<endl;
gotoxy(18,13);cout<<"  *****      **  ******* **     **   ******     ***     ****    * * **** * "<<endl;
gotoxy(18,14);cout<<" *   ****    ** * *****   **     **   ****       ***     *******     ****  "<<endl;
gotoxy(18,15);cout<<"*     **      **                                          *****      "<<endl;
gotoxy(18,16);cout<<"*  "<<endl;
gotoxy(18,17);cout<<" **  "<<endl<<endl;



    gotoxy(50,20); cout<<"Autor 1"<<endl;
    gotoxy(42,21); cout<<"Suarez Cardona,Jose David"<<endl;
    gotoxy(35,22); cout<<"jose.david.suarez@correounivalle.edu.co"<<endl;
    gotoxy(48,23); cout<<"Semestre:2"<<endl;



    gotoxy(50,26); cout<<"Autor 2"<<endl;
    gotoxy(42,27); cout<<"Rivera Pardo,Oscar Fernando"<<endl;
    gotoxy(35,28); cout<<"oscar.pardo@correounivalle.edu.co"<<endl;
    gotoxy(48,29); cout<<"Semestre:2"<<endl;



      system("pause");

}


void menuCajero(){
    int opc;
do{
         HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(hconsole,7);
system("cls");
    cout<<"------------CAJERO----------------"<<endl;
    cout<<"1.Cliente Cortesia"<<endl;
    cout<<"2.Cliente No Afiliado"<<endl;
    cout<<"3.Cliente Afiliado"<<endl;
    cout<<"4.Acerca de.."<<endl;
    cout<<"0.Salir de la aplicacion...."<<endl<<endl;

    cout<<"Digite una opcion";
    cin>>opc;

    switch(opc){
        case 1:clienteCortesia();break;
        case 2:clienteNoafiliado();break;
        case 3:clienteAfiliado();break;
        case 4:acercaDe();break;
        case 0:cout<<"Gracias por usar la aplicacion.....";break;

        default:cout<<"Error,digite una opcion correcta";
    }



}while(opc !=0);



}

int main()
{
menuCajero();
    return 0;
}
