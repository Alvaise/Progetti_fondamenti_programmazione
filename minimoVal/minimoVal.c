#include <stdio.h>
#include <stdlib.h>

/* 10 val e stampa il minore */
int minimo()
{
	int n,c,min;
	printf("Inserisci primo valore: ");
	scanf("%d", &n);
	for(c=0;c<9;c++)
	{
		printf("Inserisci valore: ");
		scanf("%d", &n);
		if(n<min)
		{
			min=n;
		}
	}
	return(min);
}

int main(int argc, char *argv[]) 
{
	int min;
	min=minimo();
	printf("\nMINIMO = %d",min);
	return 0;
}
