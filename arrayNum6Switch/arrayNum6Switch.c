#include <stdio.h>
#include <stdlib.h>
#define DIM 5
/*  menu per operazioni su array*/

/** stampa delle opzioni del menu
*/
void menu(){
	printf("\n0. Uscita");
	printf("\n1. Stampa");
	printf("\n2. Calcolo Minimo");
	printf("\n3. Calcolo Massimo");
	printf("\n4. Calcolo Media");
}

/** introduzione valori dentro un array di interi
*@param v vettore in cui introdurre i valori
*@param dim dimensione del vettore
*@modify il vettore v inserendo i valori introdotti dall'utente
*/
void caricaArray(int v[],int dim){
	int i;
	for(i=0;i<dim;i++){
		printf("inserisci un numero nell'array: ");
		scanf("%d",&v[i]);
	}
}
/** stampa dei valori contenuti in un array di interi
*@param v vettore 
*@param dim dimensione del vettore
*/
void stampaArray(int v[],int dim){
	int i;
	for(i=0;i<dim;i++){
		printf("\t%d",v[i]);
	}
}
/** funzione che trova il minimo valore dell'array
*@param v vettore con almeno un valore
*@param dim dimensione del vettore
*@return m Minimo valore contenuto nell'array
*/
int minimoArray(int v[],int dim){
	int i,m;
	m=v[0];
	for(i=0;i<dim;i++){
		if(m>v[i]){
			m=v[i];
		}
	}
	return(m);
}
/**funzione che trova il massimo valore contenuto nell'array 
*@param v vettore con almeno un valore
*@param dim dimensione del vettore
*@return M Massimo valore contenuto nell'array
*/
int massimoArray(int v[], int dim){
	int M,i;
	M=v[0];
	for(i=0;i<dim;i++){
		if(M<v[i]){
			M=v[i];
		}
	}
	return(M);
}
/**funzione che trova la media dei valori contenuti nell'array 
*@param v vettore con almeno un valore
*@param dim dimensione del vettore
*@return media 
*/
float mediaArray(int v[], int dim){
	int i;
	float somma,media;
	somma=0;
	for(i=0;i<dim;i++){
		somma=somma+v[i];
	}
	media=(float)somma/DIM;
	return(media);
}
int main(int argc, char *argv[]) {
	int v[DIM];
	int s,m,M;
	float media;
	caricaArray(v,DIM); //passare un vettore alla funzione
	menu();
	printf("\nScegli una opzione: ");
	scanf("%d",&s);
	while(s!=0){
		switch(s)
		{
			case 0:
				break;
			case 1: stampaArray(v,DIM);//Stampo array  
				break;
			case 2: m=minimoArray(v,DIM);//calcolo e stampa del minimo
					printf("Il minimo e %d ",m);
				break;
			case 3: M=massimoArray(v,DIM);//calcolo e stampa del massimo
					printf("Il massimo e %d ",M);
				break;
			case 4: media=mediaArray(v,DIM);//calcolo e stampa della media
			printf("La media e %g",media);
				break;
			default: printf("Errore: inserire il numero corrispondente a una opzione");
			
		}
		menu();
		printf("\nScegli una opzione: ");
		scanf("%d",&s);
	}	
	return 0;
}
