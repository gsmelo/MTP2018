#include <stdio.h>

int main ()
{	int arg1, arg2, i=0, opc=0, resultado;
	int vet1[256], vet2[256], vet3[256];
	unsigned int contador = 2147483648;;
do {	printf ("\n Bem vindo (a)! Escolha uma das opcoes a seguir: ");
	printf ("\n 1 - NOT");//1
	printf ("\n 2 - AND"); //2
	printf ("\n 3 - OR");//2
	printf ("\n 4 - XOR"); //2
	printf ("\n 5 - Right Shift");//1
	printf ("\n 6 - Left Shift"); //1
	printf ("\n\n Digite sua opcao: ");	
	scanf ("%d", &opc);
	switch(opc)
	        {   case 1:
	        	printf("\nDigite o argumento: ");
	        	scanf("%i", &arg1);
	        	getchar();
	        	printf("NOT %i ( ", arg1);
	        	for(contador; contador>0; contador>>= 1)
					{	if (contador & arg1){
							vet1[i]=1;
						}else {
							vet1[i]=0;
						}
						printf("%i", vet1[i]);
						i++;
					}
				printf(" ) \n = ");
				contador = 2147483648;
				i=0;
				for(contador; contador>0; contador>>= 1)
					{printf("%i", not vet1[i]);
						i++;}	
				break;			
			case 2:	
	               	printf("\nDigite o primeiro argumento: ");
	        	scanf("%i", &arg1);
	        	getchar();
	        	printf("\nDigite o segundo argumento: ");
	        	scanf("%i", &arg2);
	        	getchar();
	        	printf("\n\n %d ( ", arg1);
	        	contador = 2147483648;
				for(contador; contador>0; contador>>= 1)
					{
						if (contador & arg1){
							vet1[i]=1;
						} else {
							vet1[i]=0;
						}
						printf("%i", vet1[i]);
						i++;
					}	printf(" ) ");
				printf("\n AND ");
				printf("\n %d ( ", arg2);
				contador = 2147483648;
				i=0;
				for(contador; contador>0; contador>>= 1)
					{
						if (contador & arg2){
							vet2[i]=1;
						}
						else {
							vet2[i]=0;
						}
						printf("%i", vet2[i]);
						
						i++;
						}					
				printf(" ) : ");
				contador = 2147483648;
				i=0;
				for(contador; contador>0; contador>>= 1)
				{
				vet3[i] = vet2[i] & vet1[i];
				printf("%i", vet3[i]);
				i++;
				}
				break;			
				case 3: 
			printf("\nDigite o primeiro argumento: ");
	        	scanf("%i", &arg1);
	        	getchar();
	        	printf("\nDigite o segundo argumento: ");
	        	scanf("%i", &arg2);
	        	getchar();
	        	printf("\n\n %d ( ", arg1);
	        	contador = 2147483648;
				for(contador; contador>0; contador>>= 1)
					{
						if (contador & arg1){
							vet1[i]=1;
						}
						else {
							vet1[i]=0;
						}
						printf("%i", vet1[i]);
						
						i++;
					}	printf(" ) ");
				printf("\n OR ");
				printf("\n %d ( ", arg2);
				contador = 2147483648;
				i=0;
				for(contador; contador>0; contador>>= 1)
					{
						if (contador & arg2){
							vet2[i]=1;
						}else {
							vet2[i]=0;
						}
						printf("%i", vet2[i]);
						i++;
					}			
				printf(" ) : ");
				contador = 2147483648;
				i=0;
				for(contador; contador>0; contador>>= 1)
				{
				vet3[i] = vet2[i] or vet1[i];
				printf("%i", vet3[i]);
				i++;
				}
				break;
				case 4: 
			printf("\nDigite o primeiro argumento: ");
	        	scanf("%i", &arg1);
	        	getchar();
	        	printf("\nDigite o segundo argumento: ");
	        	scanf("%i", &arg2);
	        	getchar();
	        	printf("\n\n %d ( ", arg1);
	        	contador = 2147483648;
				for(contador; contador>0; contador>>= 1)
					{
						if (contador & arg1){
							vet1[i]=1;
						}else {
							vet1[i]=0;
						}
						printf("%i", vet1[i]);
						i++;
					}	printf(" ) ");
				printf("\n XOR ");
				printf("\n %d ( ", arg2);
				contador = 2147483648;
				i=0;
				for(contador; contador>0; contador>>= 1)
					{
						if (contador & arg2){
							vet2[i]=1;
						}else {
							vet2[i]=0;
						}
						printf("%i", vet2[i]);
						i++;
					}
				printf(" ) : ");
				contador = 2147483648;
				i=0;
				for(contador; contador>0; contador>>= 1)
				{
				vet3[i] = vet2[i] xor vet1[i];
				printf("%i", vet3[i]);
				i++;
				}
				break;
				case 5:
			printf("\nDigite o primeiro argumento: ");
	        	scanf("%i", &arg1);
	        	getchar();
	        	printf("\nDigite o segundo argumento: ");
	        	scanf("%i", &arg2);
	        	getchar();
	        	printf("\n\n %d ( ", arg1);
	        	resultado = arg1 >> arg2;
	        	contador = 2147483648;
	        	i=0;
	        	for(contador; contador>0; contador>>= 1)
					{if (contador & arg1){
							vet1[i]=1;
						}else {
							vet1[i]=0;
						}
						printf("%i", vet1[i]);
						i++;
					}printf(" ) ");
					printf("\n >> ");
				printf("\n %d ( ", arg2);
				contador = 2147483648;
	        	i=0;
		 for(contador; contador>0; contador>>= 1)
					{if (contador & arg2){
							vet2[i]=1;
						}else {
							vet2[i]=0;
						}
						printf("%i", vet2[i]);
						i++;
					}
				contador = 2147483648;
				i=0;
				printf(" ) : ");
				for(contador; contador>0; contador>>= 1)
					{if (contador & resultado)
						{vet3[i]=1;
						}
						else {
							vet3[i]=0;
						}
						printf("%i", vet3[i]);
						i++;
					}	
		 		break;
				case 6: 
					printf("\nDigite o primeiro argumento: ");
	        	scanf("%i", &arg1);
	        	getchar();
	        	printf("\nDigite o segundo argumento: ");
	        	scanf("%i", &arg2);
	        	getchar();
	        	printf("\n\n %d ( ", arg1);
	        	resultado = arg1 << arg2;
	        	contador = 2147483648;
	        	i=0;
	        	for(contador; contador>0; contador>>= 1)
					{if (contador & arg1){
							vet1[i]=1;
						}	else {
							vet1[i]=0;
						}
						printf("%i", vet1[i]);
						i++;
					}printf(" ) ");
					printf("\n << ");
				printf("\n %d ( ", arg2);
				contador = 2147483648;
	        	i=0;
	        	for(contador; contador>0; contador>>= 1)
					{if (contador & arg2){
							vet2[i]=1;
						}else {
							vet2[i]=0;
						}
						printf("%i", vet2[i]);
						i++;
					}
				contador = 2147483648;
				i=0;
				printf(" ) : ");
				for(contador; contador>0; contador>>= 1)
					{if (contador & resultado)
						{
							vet3[i]=1;
						}else {
							vet3[i]=0;
						}
						printf("%i", vet3[i]);
						i++;
					}}} 
while(opc==0);
return 0;
}
