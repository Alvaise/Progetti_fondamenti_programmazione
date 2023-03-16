#include <stdio.h>
#include <stdlib.h>
#define DIM 10
char parola1[DIM];
char parola2[DIM];
/** funzione che permette di leggere le lettere
*@return lettera
*/
char leggiLettera(){
	char l;
	l=getch();
	while(l<'A'||l>'Z'&&l<'a'||l>'z'){
		l=getch();
	}
	return(l);
}
/** funzione che riceve una lettera maiuscola o minuscola e la restituisce maiuscola
*@param lettera l 
*@return lettera maiuscola
*/

char letteraMaiuscola(char l){
	int daA='a'-'A';
	if(l>='a'){
		l= l-daA;		
	}
		return(l);
	}
/* array e caratteri */

int main(int argc, char *argv[]) {
	int i,luC,luNC;                         // luC= lettere uguali, conto il numero di lettere uguali ccasing matters
	printf("Inserire parola 1: ");			// luNC= contatore lettere uguali ma il casing non conta
	for(i=0;i<DIM;i++){
		parola1[i]=leggiLettera();
		printf("%c",parola1[i]);
	}
	printf("\n");	
	printf("Inserire parola 2: ");	
	
	for(i=0;i<DIM;i++){
		parola2[i]=leggiLettera();
		printf("%c",parola2[i]);
		}
	luC=0;
	for(i=0;i<DIM;i++){
		if(parola1[i]==parola2[i]){
			luC++;
		}
		}
	if(luC==10){ //Se il contatore delle lettere è uguale a 10 allora tutte le lettere sono uguali 
		printf("\nLe parole sono uguali");
	}else{
		printf("\nLe parole non sono uguali");
	}
	luNC=0; //Contatore delle lettera senza tener conto del casing
	for(i=0;i<DIM;i++){
		if(letteraMaiuscola(parola1[i])==letteraMaiuscola(parola2[i])){
			luNC++;
		}
		}
	if(luNC==10){ //Se il contatore delle lettere è uguale a 10 allora tutte le lettere sono uguali 
		printf("\nLe parole sono uguali non tenendo conto del casing");
	}else{
		printf("\nLe parole non sono uguali");
	}
	return 0;
}
