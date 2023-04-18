#include <stdio.h>
int main()
{
printf("Erros devem ser ");
printf("corrigidos na ordem em que sao identificados, ");
printf("pois ao corrigir ");
printf("um erro outros podem ser identificados.");
return 0;
}

/* Falta de haspas no primeiro printf
Estar chamando um printf de print no terceiro printf
Não fechou o parenteses no ulitmo printf
No ultimo printf ele coloca para pular linha mas eu não gostei logo retirei também
Abaixo o código com os erros 

#include <stdio.h>
int main()
{
printf("Erros devem ser );
printf("corrigidos na ordem em que sao identificados,");
print(" pois ao corrigir ");
printf("um erro \nOutros podem ser identificados";
return 0;
}
*/

