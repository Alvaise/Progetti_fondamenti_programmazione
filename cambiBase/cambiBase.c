#include <stdio.h>
#include <stdlib.h>
#define INVIO 13
/* programma che ci permette di fare dei cambi base (da decimale a binario e viceversa) */

/**legge una cifra come carattere e restituisce il valore corrispondente
*legge anche INVIO e restituisce un valore negativo
*utilizza una costante INVIO=13
*@return il valore  numerico corrispondente alla cifra letta o un valore negativo se digitato invio
*/
int leggiCifra(char max){
	char cifra;
	int nCifra;
	cifra=getch();
	while((cifra<'0'&&cifra!=INVIO)||(cifra>max)){
		cifra=getch();
	}
	nCifra=cifra-'0';
	return(nCifra);
}

/** restituisce il valore numerico di un numero letto per cifra sino a INVIO
*utilizza la funzione leggiCifra()
*@return ritorna il valore numerico di un numero letto cifra per cifra
*/
int leggiNumero(int b){
	int n, cifra,nCifre;
	char max;
	n=0;
	nCifre=0;
	switch(b){
		case 2: max='1';
			break;
		case 8: max='7';
			break;
		case 10: max='9';
			break;
		default: max='9';
	}
	cifra=leggiCifra(max);
	while(cifra>=0 && nCifre<30){
		n=n*b+cifra;
		printf("%d",cifra);
		nCifre++;
		cifra=leggiCifra(max);
	}
	return(n);
}

/**menu di scelta per trasformare un numero
*/
void menu(){
	printf("\n0. Uscita");
	printf("\n1. Base 2");
	printf("\n2. Base 8");
	printf("\n3. Base 10");
	printf("\n4. Base 16");
}



int main(int argc, char *argv[]) {
	int s, num,b;
	menu();
	printf("\nScegli una opzione: ");
	scanf("%d",&s);
	while(s!=0){
		switch(s)
		{
			case 0: // esce
				break;
			case 1: 	// Fa inserire numero in base 2 e stampa numero in base 10
					b=2;
					num=leggiNumero(b);
				break;
			case 2: // Fa inserire numero in base 8 e stampa numero in base 10
					b=3;
					num=leggiNumero(b);
				break;
			case 3: // Fa inserire numero in base 10 e stampa numero in base 10
					b=3;
					num=leggiNumero(b);
				break;
			case 4: // Fa inserire numero in base 16 e stampa numero in base 10
				break;
			default: printf("Errore: inserire il numero corrispondente a una opzione");
			
		}
		menu();
		printf("\nScegli una opzione: ");
		scanf("%d",&s);
	}
	
	return 0;
}
