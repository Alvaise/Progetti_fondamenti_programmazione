#include <stdio.h>
#include <stdlib.h>

/* immessi 5 val ne stampa la media */
float media()
{
	int c;
	float s,m,n;
	s=0;
	for(c=0;c<5;c++)
	{
		printf("Inserire Valore ");
		scanf("%g",&n);
		s=s+n;
	}
	m=(float)s/c;
	
	return(m);
}
int main(int argc, char *argv[]) 
{
	float m;
	m=media();
	printf("\nLa media e %g",m);
	
	return 0;
}
