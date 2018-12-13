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
	   pt* p = (pt*) calloc(N,sizeof(pt));
	   int i;
	   fori = 0; i < N; i++)
             {
	       p[i].x = cos(i*2.0*M_PI/(N-1));
	       p[i].y = sin(i*2.0*M_PI/(N-1));
	    }
	    return p;
}
	

void mostra_pontos(pt* p_i, pt * p_f) 
{
	    if(p_i < p_f) 
	    {
	        printf("(%.3f, %.3f)\n", p_i->x, p_i->y);
	        mostra_pontos(p_i+1, p_f);
	    }
}
	

int main()
{
    unsigned int N;
    pt *p;
    printf("Quais pontos?: ");
    scanf("%u", &N); 
	getchar();
	p = gera_pontos(N);
	mostra_pontos(p, p+N);
	free(p);
	return 0;
}

