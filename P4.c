//*Maria Luiza de Oliveira R Pereira *//
// *11811EBI023*//
#include <stdio.h>

int pot(int n)
{
	if (n== 0)
		return 1;

	int resultado = 1;
	for (int i = 0; i < n; i++)
	{
		resultado = resultado * 10;
	}
	return resultado;
}
int main()
{
	char numero_str[256];
	int numero_int = 0;
	int t = 0, i = 0, j = 0;

	printf("Digite o numero: ");
	scanf("%s", numero_str);


	while (numero_str[i] != '\0')
	{
		t++;
		i++;
	}

	for (i = t - 1; i >= 0; i--)
	{
		if ((int)numero_str[i] < 48 || (int)numero_str[i] > 57)
		{
			continue;
		}
		numero_int += ((int)numero_str[i] - 48) * potencia(j);
		j++;
	}
	printf("\nNumero inteiro: %d\n\n", numero_int);
	
	return 0; 
}
    
