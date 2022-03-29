#include <stdio.h> //icluimos a biblioteca padrão de c

int main() //Obrigatorio temos que criar a função main
{
	int base; //falamos o tipo de variavel da nossa variavel base
	int altura; // a mesma coisa para a nossa altura e area
	int area;
	
	// vamos fazer a interação de usuario e o código
	printf("digite o valor da base: ");
	//o usuario vai digitar o valor e quando der enter nessa primeira mensagem vai criar um espaço na memoria e armazenar no endereço da variavel base
	scanf("%i", &base);
	
	printf("Digite o valor da altura: ");
	// a mesma coisa que na explicação acima vai criar um espaço na memoria chamada altura e vai alocar oque o usuario digitar o & é reponsavel por alocar o valor no endereço
	scanf ("%i", &altura);
	
	//fazemos aqui uma operação matematica basica para dizermos oque é a aréa do retangulo no caso que é base * altura
	area = base * altura;
	
	//printamos o valor do resultado na tela
	printf("o valor da area do retangulo é: %i", area);
	
	
	return 0;
}
