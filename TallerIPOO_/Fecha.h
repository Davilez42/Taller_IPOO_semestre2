#include <iostream>
#include "ctime"
using namespace std;

string getFecha() {

      string fecha = "";
      string ho_ra;
      time_t t=time(0);

      tm* now = localtime(&t);

     int dia = now->tm_mday;
     int ano = now->tm_year+1900;
     int mes = now->tm_mon +1;

      int hora = now->tm_hour;
     int minutos = now->tm_min;
     int segundos = now->tm_sec;

      if(dia<10) {
            fecha+="0"+to_string(dia) +"/";
      } else {
            fecha+=to_string(dia) +"/";
      }

      if(mes<10) {
            fecha+="0"+to_string(mes)+"/";
      } else {
            fecha+=to_string(mes)+"/";
      }


      if(hora >12){

     ho_ra = to_string(hora)+":"+to_string(minutos) +":"+to_string(segundos) + " PM";

      }
      else{

       ho_ra = to_string(hora)+":"+to_string(minutos) +":"+to_string(segundos) + " AM";
      }





      fecha +=to_string(ano)+ " " + ho_ra;






      return fecha;
}
