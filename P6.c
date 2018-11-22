//*Maria Luiza de Oliveira R Pereira*
// *11811EBI023*//


#include <stdio.h>


int sm(int len, int *v)

{

   if(len>0)

        return *v+sm(len-1, v+1);

    else

        return 0.0;

}

float media(int x, int y)

{

    return (float)x/(float)y;

}

int main ()

{

	int vet[]={0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};

	int tamanho=0, i=0;

	printf("Quantidade a ser adicionada:\n");

	scanf("%d", &tamanho);

	printf("\nValores: \n");

	for (i=0; i<tamanho; i++)
 
		scanf("%d", &vet[i]);

	printf("\nmedia = %f", media(sm(tamanho, vet), tamanho));

	return 0;

}
