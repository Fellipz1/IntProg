// 1-
 /*
#include <stdio.h>
int main()
{
	printf("Moraes, Fellipe");
	return 0;
}
*/

// 2-
/*
#include <stdio.h>
int main()
{
	printf("XXXXXXX\n");
	printf("XX\n");
	printf("XXXX\n");
	printf("XX\n");
	printf("XX\n");
	return 0;
}
*/

// 3-
// esse é o código errado
/* 
#include <stdio.h>
int main()
{
	printf ("O compilador pode nos ajudar \n a identificar erros")
    return 0;
}
*/

// esse é o código novo
/*
#include <stdio.h>
int main()
{
	printf ("O compilador pode nos ajudar a identificar erros");
	return 0;
}
*/

// 4-
//O código corrigido fica da seguinte forma:
/*
#include <stdio.h>
int main()
{
	printf("Erros devem ser ");
	printf("corrigidos na ordem em que sao identificados,");
	printf("pois ao corrigir ");
	printf("um erro outros podem ser identificados");
	return 0;
}
*/

/*
Os erros do código original são: falta haspas no primeiro printf; está chamamando printf de print; não fechou o parenteses no ultimo printf; também retirei o \n que estava na frase do ultimo printf
O código estava da seguinte forma
#include <stdio.h>
int main()
{
	printf("Erros devem ser );
	printf("corrigidos na ordem em que sao identificados,");
	print("pois ao corrigir");
	printf("um erro \n outros podem ser identificados";
	return 0;
}
*/
