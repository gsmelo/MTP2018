// Nome: Giovana Saraiva de Melo
// Matricula: 11721EBI011

#include <stdio.h>

int main()
{
	char numbinario[256];
	int estado = 0; int resto = 0; int i = 0;
	printf("Digite o numero binario desejado: ");
	scanf("%s", &numbinario);
	for (i=0; numbinario[i]!='\0'; i++)
	{
		if (numbinario[i] == '0' && estado == 0)
		resto = 0;
			if (numbinario[i] == '1' && estado == 0)
			resto = 1;
				if (numbinario [i] == '0' && estado == 1)
				resto = 2;
					if (numbinario[i] == '1' && estado == 1)
					resto = 0;
						if (numbinario [i] == '0' && estado == 2)
						resto = 1;
							if (numbinario [i] == '1' && estado == 2)
							resto = 2;
		
		estado = resto;
		resto = 0;
	}
	
	if(estado == 0)
	printf ("O numero binario %s eh multiplo de 3", numbinario);
	else
	printf ("O numero binario %s nao eh multiplo de 3 e o resto de sua divisao por 3 eh: %d", numbinario, estado);
	
	return 0;
	
}
