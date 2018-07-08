//Nome: Giovana Saraiva de Melo
//Matricula: 11721EBI011

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct dimensao
{
	float largura;
	float profundidade;
	float altura;
};

struct produto
{
	char nome[64];
	float preco;
	struct dimensao end;
};
void cadastro(struct produto vetp[], int i)
{
	printf("\n Digite o nome: ");
	fgets(vetp[i].nome, 64, stdin);
	printf("\n Digite o preco: ");
	scanf("%f", &vetp[i].preco);
	getchar();
	printf("\n Digite a largura: ");
	scanf("%f", &vetp[i].end.largura);
	getchar();
	printf("\n Digite a profundidade: ");
	scanf("%f", &vetp[i].end.profundidade);
	getchar();
	printf("\n Digite a altura: ");
	scanf("%f", &vetp[i].end.altura);
	getchar();
}
void pesquisa(struct produto vetp[], int i)
{
	char condicional[64];
	strcpy(condicional, " ");
	if(strcmp(condicional, vetp[i].nome) == 0)
	{
		printf("\n Produto nao cadastrado!");
	}
	else
	{
		printf("\n %s , R$ %.2f, L: %.2fm x P: %.2fm x A: %.2fm", vetp[i].nome, vetp[i].preco, vetp[i].end.largura, vetp[i].end.profundidade, vetp[i].end.altura);
	}
}
int main()
{
	struct produto vetp[2];
	int opc, prod, nump = 0;
	strcpy(vetp[0].nome, " ");
	strcpy(vetp[1].nome, " ");
	do{
	printf("\n\n 1 - Cadastro \n 2 - Consulta \n 3 - Sair \n\n Digite uma opcao: ");
	scanf("%d", &opc);
	getchar();  
	switch(opc)
	{
		case 1: 
			printf("\n Escolha o produto 1 ou 2: ");
			scanf("%d", &prod);
			getchar();
			switch(prod)
			{
				case 1:
					nump = prod - 1;
					cadastro(vetp, nump);
					printf("\n Produto 1 cadastrado com sucesso! ");
					nump = 0;
					break;
				case 2:
					nump = prod -1;
					cadastro(vetp, nump);
					printf("\n Produto 2 cadastrado com sucesso! ");
					nump = 0;
					break;
				default:
					break;
			}
			break;
		case 2:	
			printf("\n Escolha o produto 1 ou 2: ");
			scanf("%d", &prod);
			getchar();
			switch(prod)
			{
				case 1:
					nump = prod -1;
					pesquisa(vetp, nump);
					nump = 0;
					break;
				case 2:
					nump = prod -1;
					pesquisa(vetp, nump);
					nump = 0;
					break;
				default:
					break;
			}
			break;
		case 3:
			return 0;
		default: 
			break;
	}	
	}while(opc != 3);
	return 0;
}
