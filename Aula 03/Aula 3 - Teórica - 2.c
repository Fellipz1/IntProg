// 2 - Construa uma sequ�ncia de instru��es para indicar quantos dias, horas, minutos e segundos equivalem a 200.000 segundos. Assim como no exerc�cio anterior, declare vari�veis, inicialize-as e, por fim, realize o c�lculo armazenando o resultado.

#include <stdio.h>

int main() {
   int segundos, minutos, horas, dias;

   segundos = 200000;
   minutos = segundos / 60;
   segundos = segundos % 60;
   horas = minutos / 60;
   minutos = minutos % 60;
   dias = horas / 24;
   horas = horas % 24;

   printf("200.000 segundos equivalem a \n%d dias.\n%d horas.\n%d minutos.\n%d segundos.\n", dias, horas, minutos, segundos);

   return 0;
}
