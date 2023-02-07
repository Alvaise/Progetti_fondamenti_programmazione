#include <stdio.h>
#include <stdlib.h>

/* inserito valore ritorna se è primo */

int main(int argc, char *argv[]) 
{
	int n,cd,div,r;
	printf("Introduci un valore: ");
	scanf("%d",&n);
	cd=0;
	for(div=2;div<n && cd==0;div++)
	{
		r=n%div;
		if(r==0)
		{
			cd++;
		}
	}
	if(cd==0)
	{
		printf("\n%d e primo\n",n);
	}
	else
	{
		printf("\n%d non e primo - cd = %d ",n,cd);
	}
	return 0;
}
