#include <stdio.h>
#include <stdlib.h>
#define DIM 10
char parola[DIM];
/**funzione che legge le lettera maiuscole e minuscole
*@return lettera inserita maiuscola o minuscola
*/
char leggiLettera(){
	char l;
	l=getch();
	while ((l<'A')||(l>'Z'&&l<'a')||(l>'z')){
		l=getch();
	}
	return(l);
}
/** funzione che riceve una lettera maiuscola o minuscola e la restituisce maiuscola
*@param lettera l dalla funzione leggiLettera()
*@return lettera maiuscola
*/

char letteraMaiuscola(char l){
	int daA='a'-'A';
	if(l>='a'){
		l= l-daA;		
	}
		return(l);
	}


/* array di caratteri e funzioni */

int main(int argc, char *argv[]) {
	int i;
	printf("inserisci una parola: ");
	for(i=0;i<DIM;i++){
		parola[i]=leggiLettera();
		parola[i]=letteraMaiuscola(parola[i]);
		printf("%c", parola[i]);
	}
	return 0;
}
