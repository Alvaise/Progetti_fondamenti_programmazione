#include <stdio.h>
#include <stdlib.h>
#define SPAZIO 32
#define INVIO 13
#define DIM 1000
/* legge frase e la inserisce nell'array */

/** legge una lettera maiuscola minuscola o lo spazio e l'invio
*dipende dalle due costanti INVIO=13 e SPAZIO=32
*@return la lettera corrispondente o spazio o invio
*/
char leggiLettera(){
	char lettera;
	lettera = getch();
	while((lettera<'A'&&(lettera!=INVIO)&&(lettera!=SPAZIO))||(lettera>'Z'&&lettera<'a')||(lettera>'z')){
		lettera=getch();
	}
	return(lettera);
}
/** permette la lettura di una frase sino a INVIO (o alla dimensione dell'array)
e la inserisce in un vettore
*dipende dalla funzione leggiLettera()
*@param vet vettore in cui viene introdotta la frase
*@param dim numero massimo di caratteri consentiti
*@return il numero di caratteri inseriti nel vettore
*/
int leggiFrase(char vet[], int dim){
	int i;
	char lettera;
	lettera=leggiLettera();
	for(i=0;lettera!=INVIO && i<dim;i++){
		vet[i]=lettera;
		printf("%c", lettera);
		lettera= leggiLettera();
	}
	return(i);
}

/** stampa un vettore di caratteri
*@param v vettore da stampare
*@param dim la dimensione del vettore da stampare
*/
void stampaVet(char vet[],int dim){
	int i;
	for(i=0;i<dim;i++){
		printf("%c",vet[i]);
	}
}

/** rende maiuscolo una lettera minuscola ( o la lascia maiuscola se già così)
*@param lettera minuscola o maiuscola
*@return la lettera corrispondente maiuscola
*/
char capitalizza(char lettera){
	int dAa;
	dAa = 'a'-'A';
	if(lettera>='a' && lettera <='z'){
		lettera= lettera-dAa;
	}
	return(lettera);
}


/** funzione che conta le occorenze di tutte le lettera di una frase
*necessita della funzione capitalizza
*@param frase vettore che contiene la frase
*@param dim dimensione del vettore ( numero di caratteri della frase)
*@param alfa il vettore che conterrà le occorenze di ogni lettera
*@modify alfa inserendo le occorenze
*/
void contaOccorenzeT(char frase[],int dim, int alfa[]){
	int i, index;
	char lettera;
	for(i=0;i<26;i++){
		alfa[i]=0;
	}
	for(i=0;i<dim;i++){
		lettera=frase[i];
		lettera= capitalizza(lettera);
		index=lettera-'A';
		alfa[index]++;
	}
}



/**ritorna numero di occorenze di una lettera in una frase
utilizza la funzione capitalizza()
*@param v vettore della frase
*@param dim dimensione del vettore (numero caratteri frase)
*@param l lettera di cui cercare le occorenze (maiuscole o minuscole)
*/

int contaOccorenze(char v[],int dim, char l){
	int cO, i;
	cO=0;
	for(i=0;i<dim;i++){
		if(capitalizza(v[i])==capitalizza(l)){
			cO++;
		}
	}
	return (cO);
}

int main(int argc, char *argv[]) {
	char frase[DIM];
	int alfa[26];
	int nCar, nO, i;
	char lettera;
	printf("Introduci una frase (terminata da invio): ");
	nCar=leggiFrase(frase, DIM);
	printf("\n");
	stampaVet(frase,nCar);
	contaOccorenzeT(frase,nCar,alfa);
	for(i=0;i<26;i++){
		if(alfa[i]!=0){
			printf("\n%c = %d", i+'A', alfa[i]);
		}
	}
	//printf("\nInserisci una lettera: ");
	//lettera=leggiLettera();
	//printf("%c", lettera);
//	for(lettera='A';lettera<='Z';lettera++){
//		nO=contaOccorenze(frase,nCar,lettera);
//		if(nO!=0){
//			printf("\nNumero Occorenze '%c' = %d", lettera, nO);	
//		}
//	}

	return 0;
}
