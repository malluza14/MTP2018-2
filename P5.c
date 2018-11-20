//*Maria Luiza de Oliveira R Pereira*//
//*11811EBI023*//

#include <stdio.h>

int main()
{
	char *p;
	char str[256];

	int *ps;
	int i = 0, cont = 0, op = 0, text[256];

	do
	{
		do
		{

      printf("\n1.Codificar");
			printf("\n2.Decodificar");
			printf("\n0. Sair\n");
			printf("\nDigite a opcao de escolha: ");
			scanf("%d", &op);
			getchar();
		}
		while(op != 0 && op != 1 && op != 2);

		switch(op)
		{
			case 0:
				return 0;
			case 1:
				for(i; i < 256; i++) str[i] = '\0';
				printf("\nDigite os caracteres: ");
				fgets(str, 256, stdin);

				for(cont=0; str[cont] != '\0'; cont++);

				ponts = (int*)str;
				printf("\nA frase codificada eh: \n");

				for(i = 0; i < cont; i++) if(*(ps + i) != 0 ) printf("%i ", *(ps + i));
				printf("\n\n");
				break;

			default :
				printf("\nDigite 0 e aperte enter\n");
				pont = (char*)text;
				i = 0; cont = 0;
				printf("Digite o numero de escolha: \n");

				do
				{
					scanf("%d", &cont);
	 				getchar();
					text[i] = cont;
					i++;
				}while(cont != 0);

				p = (char*)&text;
				printf("\nOs caracteres decodificados sao: \n");

				for(i = 0; i < sizeof(text) && *(p+i) != 0; i++) printf("%c", *(p+i));
				printf("\n\n");
				break;
		}
	}while(op != 0);

	return 0;
}
