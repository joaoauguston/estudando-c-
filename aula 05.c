#include <stdio.h>

/* existe varios tipo de variaveis ou seja o int mais existe outros tipos 
int = numero inteiros
float = numeros "quebrados"
char = armazena um caractere
*/
int main()
{
	int inteira = 10;
	
	float decimal = 10.5;
	
	char letra = 'a';

	//Agora para imprimir esses tipos de variaveis na tela existe uma pequena diferença
	
	// o \n é para quebrar uma linha depois que o print for executado
	
	//int usamos %i
	printf("%i\n", inteira);
	
	//float usamos %f  obs:esse.1 depois da % e para aparecer somente uma quantidade de numeros após a virgula
	printf("%.1f\n", decimal);
	
	//Char usamos %c
	printf("%c", letra);
	return 0;
}
