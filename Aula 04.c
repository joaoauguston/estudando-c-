#include <stdio.h> //icluimos a biblioteca padr�o de c

int main() //Obrigatorio temos que criar a fun��o main
{
	int base; //falamos o tipo de variavel da nossa variavel base
	int altura; // a mesma coisa para a nossa altura e area
	int area;
	
	// vamos fazer a intera��o de usuario e o c�digo
	printf("digite o valor da base: ");
	//o usuario vai digitar o valor e quando der enter nessa primeira mensagem vai criar um espa�o na memoria e armazenar no endere�o da variavel base
	scanf("%i", &base);
	
	printf("Digite o valor da altura: ");
	// a mesma coisa que na explica��o acima vai criar um espa�o na memoria chamada altura e vai alocar oque o usuario digitar o & � reponsavel por alocar o valor no endere�o
	scanf ("%i", &altura);
	
	//fazemos aqui uma opera��o matematica basica para dizermos oque � a ar�a do retangulo no caso que � base * altura
	area = base * altura;
	
	//printamos o valor do resultado na tela
	printf("o valor da area do retangulo �: %i", area);
	
	
	return 0;
}
