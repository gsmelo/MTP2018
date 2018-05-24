#include <stdio.h>

int soma(int vet[20], int n);
float media(int soma, float cont);
void preenchezero(int vet[20]);

int main()
	{
		int vet[20];
		int i, somatorio;
		float cont;
		preenchezero(vet);
		for(i=1; i<21; i++)
		{
			printf("\nDigite o %d numero: ", i);
			scanf("%d", &vet[i-1]);
			getchar();
			if(vet[i-1] != 0) 
			cont++;
		}
		i--;
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
