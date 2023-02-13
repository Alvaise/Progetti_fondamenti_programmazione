#include <stdio.h>
#include <stdlib.h>

/* controllo che la lettera inserita sia minuscola */
char controlloMinuscola()
{
	char l;
	printf("Inserire carattere: ");
	l=getch();
	while(l<'a'||l>'z')
	{
		l=getch();
	}
	return(l);
}
int main(int argc, char *argv[]) 
{
	char l;
	l=controlloMinuscola();
	printf("%c",l);
	return 0;
}
