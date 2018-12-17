/*P1.c*/
/*Maria Luiza de Oliveira R Pereira*/
/*11811EBI023*/

#include <stdio.h>

int main()
{
    int estado = 0;
    char bits[256];
      scanf("%s", &bits[0]);
      int i=0;
    while (bits[i] != '\0')
      {
        if (estado == 0 && bits[i] == '0')
        {
          estado = 0;
          printf("estado = 0 \n");
        else if(estado == 0 && bits[i] == '1')
        { estado = 1;
          printf("estado = 1 \n");
        }
        else if (estado == 1 && bits[i] == '0')
          estado = 1;
          printf("estado = 2 \n");
        else if(estado == 1 && bits[i] == '1')
        { estado = 0 ;
          printf("estado = 0 \n");
        }
        else if (estado == 2 && bits[i] == '0')
          printf("estado = 1 \n");
          estado = 1;
        else if(estado == 2 && bits[i] == '1')
        { estado = 1 ;
          printf("estado = 2 \n");
        }
        i++;
        }
     }
    if (estado == 0)
    {
        printf(" A sequencia %s\n", bits);
        printf ("e multiplo de 3");
        
    }
    else
    {
        printf("A sequencia %s\n", bits);
        printf("nao eh multiplo de 3\n");
        
    }
    return 0;
}

    
