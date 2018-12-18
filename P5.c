//*Maria Luiza de Oliveira R Pereira*//
//*11811EBI023*//

#include <stdio.h>

typedef
unsigned long long int
Bytes8;
typedef
struct LCG { Bytes8 a, c, m, rand_max, atual; }
LCG;

void sem(LCG * r, Bytes8 seed)
{
r->a = 0x5DEECE66DULL;
r->c = 11ULL;
r->m = (1ULL << 48);
r->rand_max = r->m - 1;
r->atual = seed;
}

Bytes8 lcg_rand(LCG * r) {
r->atual = (r->a * r->atual + r->c) % r->m;
return r->atual;
}

double lcg_rand_01(LCG * r) {
return ((double) lcg_rand(r))/(r->rand_max);
}

void gera_n(float * vetor, int tam,float min, float max, LCG * r) {
int i;
for(i = 0; i < tam; i++)
vetor[i] = (max-min)*lcg_rand_01(r) + min;
}

float sum(float *v_ini,float *v_fim){
       return (v_ini == v_fim+1)? 0 : *v_ini + soma(v_ini+1,v_fim);
}
	    
float prod(float *v_ini,float *v_fim){
	return (v_ini == v_fim+1)? 1 : *v_ini * produto(v_ini+1,v_fim);
}

int main()
{
    LCG random;
    sem(&random,123456);
    int op=0;
    float vet[50];
    int N = 50;
    gera_n(vet,N, 0.5, 1.5, &random);
    printf("Este programa faz calculos com 50 numeros gerados de maneira.");
	do{printf("\nEscolha a operacao a ser realizada:\n[1]Somatorio \n[2]Produtorio.\n[3]Sair\n");
	scanf("%d",&op);
	switch(op){
		case 1:
		
		printf("\nSoma : %f", sum( &vet[0],&vet[0] + N-1 ) );
		break;
	
		case 2:
		
		printf("\nProduto: %g", prod( &vet[0], &vet[0] + N-1) );
		break;
		
		default:
 	    {
 		if(op!=3)
 		printf("Operacao invalida!\n");
 		break;
    }
  }	
}while(op!=3);
return 0 ;
}
