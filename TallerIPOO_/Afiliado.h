#ifndef AFILIADO_H
#define AFILIADO_H
#include "NoAfiliado.h"


class Afiliado:public NoAfiliado {
public:
      int puntos;
      Afiliado();
      virtual ~Afiliado();

      void setCalcularTotalCompra();
      int getPuntos();

      string getInfo();

protected:
private:
};

#endif // AFILIADO_H
