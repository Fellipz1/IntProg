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
// esse � o c�digo errado
/* 
#include <stdio.h>
int main()
{
	printf ("O compilador pode nos ajudar \n a identificar erros")
    return 0;
}
*/

// esse � o c�digo novo
/*
#include <stdio.h>
int main()
{
	printf ("O compilador pode nos ajudar a identificar erros");
	return 0;
}
*/

// 4-
//O c�digo corrigido fica da seguinte forma:
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
Os erros do c�digo original s�o: falta haspas no primeiro printf; est� chamamando printf de print; n�o fechou o parenteses no ultimo printf; tamb�m retirei o \n que estava na frase do ultimo printf
O c�digo estava da seguinte forma
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
