#include <stdio.h>
#include <stdlib.h>

/* dato un valore inserito ne stampa tutti i divisori non banali se ci sono */

int main(int argc, char *argv[]) 
{
	int n,div,r,cd;
	printf("Inserisci numero intero maggiore di 1: ");
	scanf("%d", &n);
	while(n<=1)
	{
		printf("Errore, inserire un numero intero maggiore di 1");
		scanf("%d",&n);
	}
	for(div=2,cd=0;div<=n/2;div++)
	{
		r=n%div;
		if(r==0)
		{
			printf("%d ",div);
			cd++;
		}
	}
	if(cd==0)
	{
		printf("%d e un numero primo", n);
	}
	return 0;
}
