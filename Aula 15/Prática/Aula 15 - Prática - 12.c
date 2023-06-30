// 12) Fazer uma função que leia uma string do teclado (máx. 50 caracteres) e imprima uma “estatística” dos caracteres digitados. Isto é, 
// imprima a quantidade de vogais, a quantidade de consoantes e a quantidade de outros caracteres.

#include <stdio.h>
void estatistica(char texto[])
{
    int i, vogais = 0, consoantes = 0, caracter=0;
  
    for (i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u' ||
            texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'U')
        {
            vogais++;
        } else if (texto[i] == 'b'||texto[i] == 'c'||texto[i] == 'd'||texto[i] == 'f'||texto[i] == 'g'||texto[i] == 'h'||texto[i] == 'i'||
			texto[i] == 'j'||texto[i] == 'k'||texto[i] == 'l'||texto[i] == 'm'||texto[i] == 'n'||texto[i] == 'p'||texto[i] == 'q'||texto[i] == 'r'||
			texto[i] == 's'||texto[i] == 't'||texto[i] == 'v'||texto[i] == 'w'||texto[i] == 'x'||texto[i] == 'y'||texto[i] == 'z'||texto[i] == 'B'||
			texto[i] == 'C'||texto[i] == 'D'||texto[i] == 'F'||texto[i] == 'G'||texto[i] == 'H'||texto[i] == 'I'||texto[i] == 'J'||texto[i] == 'K'||
			texto[i] == 'L'||texto[i] == 'M'||texto[i] == 'N'||texto[i] == 'P'||texto[i] == 'Q'||texto[i] == 'R'||texto[i] == 'S'||texto[i] == 'T'||
			texto[i] == 'V'||texto[i] == 'W'||texto[i] == 'X'||texto[i] == 'Y'||texto[i] == 'Z')
    		{
    			consoantes++;
			}
		else 
		{
			caracter++;
		}
	}
  	
    printf("O numero de vogais na string e: %d\n", vogais);
    printf("O numero de consoantes na string e: %d\n", consoantes);
    printf("O numero de caracteres na string e: %d\n", caracter);

}
int main(void)
{
    char texto[50];
  
    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);
  	
  	estatistica(texto);
  	
    return 0;
}
