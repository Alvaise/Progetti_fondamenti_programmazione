#include <stdio.h>
#include <stdlib.h>

/*stampa tabellina*/

/** funzione che stampa la tebellina di un numero intero
*@param n numero di cui stampare la tabellina 
*/
void tabellina(int n){
	int i,r;
	for(i=1;i<=10;i++){
		r=n*i;
		printf("%d\t",r);
	}
}


int main(int argc, char *argv[]) {
	int i;
	for(i=2;i<=10;i++){
		tabellina(i);
		printf("\n");
	}
	return 0;
}
