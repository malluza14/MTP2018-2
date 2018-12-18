//*Maria Luiza de Oliveira R Pereira *//
// *11811EBI023*//
#include <stdio.h>

 double f(float m, float n)
{
	if(m==0)
		return n+1;
	else if(m>0 && n==0)
		return f(m-1,1);
	else if(m>0 && n>0)
		return f(m-1, f(m, n-1));
}
 int main ()
{
	float m, n;
	scanf ("%f %f", &m, &n);
	printf("%g + %g = %g", m, n, f(m,n));
	return 0;
}
