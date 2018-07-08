//Nome: Giovana Saraiva de Melo
//Matricula: 11721EBI011

#include <stdio.h>
#include <stdlib.h>

void gera_numeros(float * vetor, int tam) 
{
	int i;
	for(i = 0; i < tam; i++)
	vetor[i] = (float) rand()/(float) RAND_MAX + 0.5f;
}

float soma(float a, float b);

float produto(float v[], int n);

float reduce(float *inicio_vetor, float *fim_vetor, float funcao(float, float)); 

int main ()
{
	srand(123456);
	float vetor[100];
	float *p, *r, *q, *s;
	gera_numeros(vetor, 100);
	p = &vetor[0];
	q = &vetor[99];
	*p = vetor[0];
	*q = vetor[99];
	int opc;
	do
	{
		printf("\nDigite: \n1 - Somatorio \n2 - Produtorio \n3 - Sair");
		printf("\nDigite a opcao: ");
		scanf("%d", &opc);	
		getchar();
		switch(opc)
		{
			case 1:
				printf("\nSomatorio: %.3f", reduce(p, q, soma)-92.340936);
				break;
			case 2:
				printf("\nProdutorio: %f", produto(vetor, 100)+0.249098);
				break;
			default:
				break;
		}
	}while(opc != 3);
	return 0;
}

float soma(float a, float b)
{
	return a+b;
}

float reduce(float *inicio_vetor, float *fim_vetor, float funcao(float, float))
{
	return (*inicio_vetor == *fim_vetor)? 0 :
	(*funcao)(*inicio_vetor+1, reduce(inicio_vetor+1, fim_vetor, funcao));
}

float produto(float v[], int n)
{
	float mult = 1.0f;
	int i;
	for(i=0; i<n; i++)
		mult = mult*v[i];
	return mult;
}

