#include <stdio.h>

void funcao_converter_string_em_vetor(int v[], char w[])
{
	int i, num=0, n;
	for(i=0; w[i] != '\0';i++)
	{
		if(w[i] >= '0' && w[i] <= '9')
		v[i] = w[i] - '0';
	}
	n=i;
	for(i=0; i<n; i++)
	{	if(w[i] >= '0' && w[i] <= '9')
	num = num*10 + v[i];}
	
	printf("\nO numero eh: %d", num);
	}
int main()
{
	char w[256];
	int v[256];
	printf("Digite algo: ");
	scanf("%s", w);
	funcao_converter_string_em_vetor(v,w);
	return 0;
}
