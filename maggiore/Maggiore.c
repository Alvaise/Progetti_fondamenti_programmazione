#include <stdio.h>
#include <stdlib.h>

/* Stampa il numero maggiore tra due inseriti dall'utente */

int main(int argc, char *argv[]) 
{
	int a,b; //dichiarazione di 2 variabili intere
	
	printf("Introduci primo valore intero :");
	scanf("%d", &a); // lettura di una valore intero inserito in a
	
	printf("Introduci secondo valore intero :");
	scanf("%d", &b); // lettura di un valore inserito in b 
	
	if(a>b) 
	{ //ramo del vero
		printf("il maggiore e' : %d", a); 
	}
	else
	{ //ramo del falso
		printf("il maggiore e' : %d", b);
	}
	
	return 0;
}
