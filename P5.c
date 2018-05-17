// Giovana Saraiva de Melo
// 11721EBI011

#include <stdio.h>

void codificar()
{
	int i, j;
	char str[256];
	int *ps;
	for(i=0; i<256; i++)
	{
		str[i]='\0';
	}
	printf("\n Digite algo em caracteres: ");
	fgets(str, 256, stdin);
	for(i=0; str[i]!='\0'; i++)
	ps = (int*)str;
	printf("\n O que voce digitou codificado eh: ");
	for(j=0; j<i; j++)
	{
		if(*(ps+j) != 0)
		printf("%i ", *(ps+j));
	}
}

void decodificar()
{
	int vet[64], i, num;
	char *pc;
			pc = (char*)vet;
			i=0; 
			printf("\nDigite algo em numeros, aperte enter e digite 0 : ");
			do{
				scanf("%d", &num);
				getchar();
				vet[i] = num;
				i++;
			}while(num!=0);
			pc = (char*)&vet;
			printf("\n\n O que voce digitou decodificado eh: ");
			for(i=0; i<sizeof(vet) && *(pc+i)!=0; i++)
			{
				printf("%c", *(pc+i));	
			}
}

int main ()
{
	int opc;
	printf("\n\n Bem vindo! \n\n 1-Codificar\n 2-Decodificar \n\n Sua opcao: ");
	scanf("%d", &opc);
	getchar();
	if(opc==1)
	codificar();
	if(opc==2);
	decodificar();
return 0;
}
