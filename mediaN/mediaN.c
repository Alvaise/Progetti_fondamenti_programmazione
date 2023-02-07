#include <stdio.h>
#include <stdlib.h>
#define N 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int s,c,num;
	float m;
	s=0;
	for(c=0;c<N;c++)
	{
		prinf("Inserisci un valore: ");
		scanf("%d", num);
		s=s+num;
	}
	m=(float)s/c;
	printf("\nmedia = %g\n", m);
	return 0;
}
