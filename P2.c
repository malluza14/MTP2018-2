/*P2.c*/
/*Maria Luiza de Oliveira R Pereira*/
/*11811EBI023*/

#include <stdio.h>

int potencia(int n, int pot)
   {
       int i=0;
       int r=1;
       
       for (i=0; i<pot; i++)
        {
            r = r*n;
        }
        return r; 
   }
   
int npdec(char nario[], int base)
   {
       int i=0;
	int soma=0;
	int aux=-1;
	int atual = 0;

	for (i=0; nario[i] != '\0'; i++)
	{
		aux= aux+1;
	}

       for (i=0; i<= aux ; i++)
       {
       	if(nario[i] >= 0 || nario[i] <=9)
       		atual= nario[i] - '0';
       	
       	if (nario[i] == 'a' || nario[i] == 'A') 
       		atual = 10;
       	
       	if (nario[i] == 'b' || nario[i] == 'B') 
       		atual = 11;
       	
       	if (nario[i] == 'c' || nario[i] == 'C') 
       		atual = 12;
       	
       	if (nario[i] == 'd' || nario[i] == 'D')
       		atual = 13;
       	
       	if (nario[i] == 'e' || nario[i] == 'E')
       		atual = 14;
       	
       	if (nario[i] == 'f' || nario[i] == 'F')
       		atual = 15;

         soma = soma + (atual*potencia(base,(aux-i)));
       } 
       return soma;
   }

char * decpn(int decimal, int base)
    {
    	char restos[256];
    	int i;
    	int aux = decimal;
    	for(i = 0; aux != 0; i++)
    	{
    		if((aux % base) >= 0 && (aux % base) <= 9)
    		{
    			restos[i] = aux % base + '0'; 
    		}
    		if((aux % base) == 10)
    		{
    			restos[i] = 'A';
    		}
    		if((aux % base) == 11)
    		{
    			restos[i] = 'B';
    		}
    		if((aux % base) == 12)
    		{
    			restos[i] = 'C';
    		}
    		if((aux % base) == 13)
    		{
    			restos[i] = 'D';
    		}
    		if((aux % base) == 14)
    		{
    			restos[i] = 'E';
    		}
    		if((aux % base) == 15)
    		{
    			restos[i] = 'F';
    		}
    		
    		aux = aux/base;
    	}

    	static char resultado[256];
    	i--;
    	for(aux=0; i>= 0; aux++)
    	{
    		resultado[aux] = restos[i];
    		i--;
    	}
    	return resultado;
    }

int main() 
{
        int op;
        char bits[256];
        int numero;
        
        printf ("Conversor de bases numéricas \n\n1)Binario para decimal; \n2)Binario para hexadecimal; \n3)Hexadecimal para decimal; \n4)Hexadecimal para binario; \n5)Decimal para binario; \n6)Decimal para hexadecimal; \n7)Octal para decimal; \n8)Decimal para octal.");
		printf ("\n\nDigite sua opcao: ");
		scanf ("%d", &op);
		switch (op)
		{
			case 1:
				printf ("Digite o numero em binario: ");
				scanf ("%s", bits);
				printf ("Valor em decimal: %d \n", npdec(bits, 2));
				break;

			case 2:
				printf ("Digite o numero em binario: ");
				scanf ("%s", bits);
				printf("Valor hexadecimal: %s \n", decpn(npdec(bits, 2), 16));
				break;

			case 3:
				printf ("Digite o numero em hexadecimal: ");
				scanf ("%s", bits);
				printf ("Valor em decimal: %d \n", npdec(bits, 16));
				break;

			case 4:
				printf ("Digite o numero em hexadecimal: ");
				scanf ("%s", bits);
				printf("Valor binário: %s \n", decpn(npdec(bits, 16), 2));
				break;
			case 5:
				printf ("Digite o numero em decimal: ");
				scanf ("%d", &numero);
				printf ("Valor binário: %s \n", decpn(numero, 2));
				break;
			case 6:
				printf ("Digite o numero em decimal: ");
				scanf ("%d", &numero);
				printf ("Valor hexadecimal: %s \n", decpn(numero, 16));
			break;

			case 7: 
				printf ("Digite o numero em octal: ");
				scanf ("%s", bits);
				printf ("Valor em decimal: %d \n", npdec(bits, 8));
				break;

			case 8:
				printf ("Digite o numero em decimal: ");
				scanf ("%d", &numero);
				printf ("Valor octal: %s \n", decpn(numero, 8));
				break;
			 
				default:
				break;
		}
	return 0;
}
