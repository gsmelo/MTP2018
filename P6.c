// Giovana Saraiva de Melo
// 11721EBI011

#include <stdio.h>

int soma(int vet[20], int n);
float media(int soma, float cont);
void preenchezero(int vet[20]);

int main()
	{
		int vet[20];
		int i, somatorio, tam;
		float cont;
		printf("Digite a quantidade de termos desejados: ");
		scanf("%d", &tam);
		preenchezero(vet);
		for(i=0; i<tam; i++)
		{
			printf("\nDigite o %d numero: ", i+1);
			scanf("%d", &vet[i]);
			getchar();
			if(vet[i] != 0) 
			cont++;
		}
		somatorio = (soma (vet, i) );
		printf("\nA media dos numeros digitados eh: %f", media(somatorio, cont));
		
		return 0;
		}
		
	
void preenchezero(int vet[20])
	{
		int i;
		for(i=0; i<20; i++)
		{
			vet[i] = 0;
		}
	}
	
int soma(int vet[20], int n) 
	{
		int s;
	    if (n == 0) return 0;
	    else{
		      s = soma(vet, n-1);
		      if (vet[n-1] > 0)
			  	{
				  s += vet[n-1];
				}
		      return (s);
			}
	}
	
float media(int soma, float cont)
	{
		float resul;
		resul = soma/cont;
		return resul;
	}
