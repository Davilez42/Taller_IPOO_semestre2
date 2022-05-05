#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>

using namespace std;

class Cliente {
public:

      string nombre,apellido,fecha_compra;
      int total;
      int IVA;

      Cliente();
      virtual ~Cliente();

      void setID();
      void setNombre();
      void setApellido();
      void setValorCompra();
      virtual void setCalcularTotalCompra()=0; //metodo polimorfismo

      int getID();
      string getNombre();
      string getCalcularFecha_compra();
      string getApellido();
      int getTotal_Compra();
      int getValor_Compra();
      virtual string getInfo(); //aplico polimorfimos para obtener la informacion de los clientes

protected:
      int ID;
      int subtotal_compra;
private:

      int valor_Compra;
};

#endif // CLIENTE_H
