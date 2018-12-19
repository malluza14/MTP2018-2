//*Maria Luiza de Oliveira R Pereira*//
//*11811EBI023*//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
	float x;
	float y;
}pt;

pt * gera_pontos(int N)
{
    pt * p = (pt*) calloc(N,sizeof(pt));
    int i;
    for(i = 0; i < N; i++)
    {
        p[i].x = cos(i*2.0*M_PI/(N-1));
		    p[i].y = sin(i*2.0*M_PI/(N-1));
    }
    return p;
 }

void mostra_pontos(pt* p_i, pt* p_f)
{
    if(p_i < p_f)
    {
        printf("(%.3f, %.3f)\n", p_i->x, p_i->y);
        mostra_pontos(p_i+1, p_f);
    }
}

void grava_pontos(pt* p_i, int n)
{
  FILE * arq;
  arq = fopen("pontos.dat", "wb");
  fwrite(p_i, n, sizeof(pt), arq);
  fclose(arq);
  printf("Arquivo gravado !");
}

pt * le_arq(char *nome_arq, unsigned int * pn)
{
  pt * p = (pt*) malloc(sizeof(p));
  unsigned int n = 0;
  FILE * arq;
  arq = fopen(nome_arq, "rb");
  if(arq != NULL)
  {
    while(1)
    {
      fread(p, 1, sizeof(pt), arq);
      if(feof(arq)) break;
      n++;
    }
    rewind(arq);
    p  = (pt *) realloc(p, n*sizeof(pt));
    fread(p, n, sizeof(pt), arq);
    *pn = n;
    return p;
  }
  printf("Digite o em quantas vezes o arquivo será dividido:");
  return 0;
}


int main()
{
    unsigned int N;
    int op=0;
    pt *p;
    printf("Este programa mostra pontos de aleatorios de uma circunferencia: ");
	  do
    {
    printf("\nEscolha a operacao a ser realizada:\n[1]Gerar arquivo com pontos \n[2]Recuperar pontos de arquivo.\n[3]Sair\n");
	scanf("%d",&op);
	switch(op){
		case 1:
		 { printf("Quantos pontos?: ");
		 	scanf("%u", &N);
		 	getchar();
            p = gera_pontos(N);
            grava_pontos(p, N);;
		 	break;
            }

		case 2:
		{
     p= le_arq("pontos.dat", &N);
		 mostra_pontos(p, p+N);
		 break;
		}

		break;

		default:
 	  {
 		if(op!=3)
 		printf("Operacao invalida!\n");
 		break;
    }
  }
}
   while(op!=3);
      free(p);
      return 0;
}
