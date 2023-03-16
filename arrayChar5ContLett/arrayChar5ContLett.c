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
/* programma che conta quante volte una lettera occorre*/

int main(int argc, char *argv[]) {
	int i,cL;
	printf("inserisci una parola: ");
	for(i=0;i<DIM;i++){
		parola[i]=leggiLettera();
		printf("%c",parola[i]);
	}
	cL=0;
	for(i=0;i<DIM;i++){
		if(letteraMaiuscola(parola[i])=='A'){
			cL++;		
		}
	}
	printf("\nLa lettera a si ripete %d volte",cL);
	return 0;
}
