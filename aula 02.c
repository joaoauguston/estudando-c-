#include <stdio.h> //Icluindo a biblioteca padr�o de C

//imprimindo as variaveis criadas no printf

//criando fun��o principal pois sempre tem que ser assim
int main()
{
    //CRIA��O DAS VARIAVEIS DO TIPO INTEIRA
	int minhaIdade;
	minhaIdade = 18;
	
	int paiIdade;
	paiIdade = 59;
	
	int maeIdade;
	maeIdade = 52;
	
	// %i � um modo de falar que ali onde tem ele vai entrar um variavel tipo inteira
	//depois das aspas colocamos a ordem consecutiva de como vamos querer de como as nossas variaveis ira aparecer na tela para o usuario
	printf("Minha idade e : %i\n idade pai: %i\n mae idade: %i\n",minhaIdade, paiIdade, maeIdade);
	
	
return 0;
}
