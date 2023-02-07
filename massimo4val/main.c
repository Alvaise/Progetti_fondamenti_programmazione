#include <stdio.h>
#include <stdlib.h>

/* Dati 4 valori inseriti dall'utente ne restituisce il maggiore*/

int main(int argc, char *argv[]) 
{
	int a,b,c,d,max;
	
	printf("Inserire primo valore ");
	scanf("%d", &a);
	
	printf("Inserire secondo valore ");
	scanf("%d", &b);
	
	printf("Inserire terzo valore ");
	scanf("%d", &c);
	
	printf("Inserire quarto valore ");
	scanf("%d", &d);
	
	max=a;
	
	if(b>max)
	{
		max=b;
	}
	else if (c>max)
	{
		max=c;
	}
	else if (d>max)
	{
		max=d;
	}
	printf("Il maggiore e : %d", max);
	return 0;
}
