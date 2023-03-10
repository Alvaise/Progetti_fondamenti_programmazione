#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/** funzione che legge una cifra decimale e ritorna il valore
@return valore numerico corrispondente alla cifra letta come carattere 
*/
int leggiCifra(){
	char cifra;
	int nCifra;
	cifra=getch();
	while(cifra<'0'|| cifra>'9'){
		cifra=getch();
	}
	nCifra=cifra-'0';
	return(nCifra);
}
int main(int argc, char *argv[]) {
	int t,n,s,p;
	s=0;
	p=1000;
	for(t=0;t<4;t++){
		n=leggiCifra();
		printf("%d",n);
		n*=p;
		s+=n;
		p/=10;
	}
	printf("\n%d",s);
	return 0;
}
