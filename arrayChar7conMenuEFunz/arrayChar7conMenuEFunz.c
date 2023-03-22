#include <stdio.h>
#include <stdlib.h>
#define DIM 10

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

/**
 * funzione che usa la leggiLettera per introdurre i caratteri in un array vuoto
 * @param v vettore in cui introdurre i caratteri
 * @param dim dimensione del vettore
*/
void caricaArrayChar(char v[],int dim){
	int i;
		printf("Inserisci lettera nell'array: ");
	for (i = 0; i < dim; i++)
	{
		v[i]=leggiLettera();
		printf("%c",v[i]);
	}
	
}

/** stampa dei valori contenuti in un array di caratteri
*@param v vettore 
*@param dim dimensione del vettore
*/
void stampaArray(char v[],int dim){
	int i;
	for(i=0;i<dim;i++){
		printf("%c",v[i]);
	}
}

/* menu con serie di azioni da compiere su array di caratteri */
/** stampa delle opzioni del menu
*/
void menu(){
	printf("\n0. Uscita");
	printf("\n1. Stampa");
	printf("\n2. Stampa Maiuscole");
	printf("\n3. Stampa Inversa");
	printf("\n4. Occorenza di a");
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

/** stampa dei valori in maiuscolo contenuti in un array di caratteri
*@param v vettore 
*@param dim dimensione del vettore
*/
void stampaArrayMaiuscolo(char v[],int dim){
	int i;
	for(i=0;i<dim;i++){
		printf("%c",letteraMaiuscola(v[i]));
	}
}

/** stampa dei valori in inverso rispetto al loro ordine contenuti in un array di caratteri
*@param v vettore 
*@param dim dimensione del vettore
*/
void stampaArrayInv(char v[], int dim){
	int i;
	for(i=dim;i>=0;i--){
		printf("%c",v[i]);
	}
}

/**Stampa quante volte la lettera a occorre
*@param vettore v 
*@param dim dimensione array
*@return cL contatore delle a 
*/
int occLetteraA(char v[], int dim){
	int i,cL;
	cL=0;
	for(i=0;i<dim;i++){
		if(letteraMaiuscola(v[i])=='A'){
			cL++;
		}
	}
	return(cL);
}


int main(int argc, char *argv[]) {
	char parola[DIM];
	int s,cA;
	caricaArrayChar(parola,DIM);
	menu();
	printf("\nScegli una opzione: ");
	scanf("%d",&s);
	while(s!=0){
		switch(s){
			case 0:
				break;
			case 1:stampaArray(parola,DIM);
				break;
			case 2:stampaArrayMaiuscolo(parola,DIM);
				break;
			case 3: stampaArrayInv(parola,DIM); // stampa inversa
				break;
			case 4: cA=occLetteraA(parola,DIM); // occorenza lettera a
					printf("La lettera a occorre %d volte",cA);  
				break;
			default: printf("Errore: inserire il numero corrispondente a una opzione");
		}
		menu();
		printf("\nScegli una opzione: ");
		scanf("%d",&s);
	}
	return 0;
}
