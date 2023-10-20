#include <stdio.h>

/* retorna o valor da soma dos elementos do vetor */
int soma( int numeros[] )
{
	int soma = 0;
	int* ponteiro = numeros;
	while(*ponteiro < sizeof(numeros))
	{
		if(*ponteiro == 0)
		{
			break;
		}
		soma += *ponteiro;
		ponteiro++;
	}
	return soma;
}

/* retorna a quatidade de elementos validos do vetor */
int tamanho( int numeros[] )
{	int tamanho = 0;
	int* ponteiro = numeros;
	while(*ponteiro < sizeof(numeros))
	{
		if(*ponteiro == 0){
			break;
		}
		else
		{
			tamanho++;
		}
		ponteiro++;
	}
	return tamanho;
}

/* retorna media dos valores do vetor */
float media( int numeros[] )
{
    int *ponteiro = numeros;
    float media = soma(numeros)/tamanho(numeros);
    return media;
}

/* funcao principal */
int main() {
   // declaracao e inicializacao do vetor numeros
   int numeros[50] = {4,2,2,6,1,5,3,5};
   int* ponteiro;

   // saida
	printf("Soma de numeros = %d \n", soma(numeros));
	printf("Número de elementos = %d \n", tamanho(numeros));
	printf("Média = %2.f", media(numeros));

}