#include <stdio.h>
#include <stdlib.h>
#define INVIO 13
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int leggiCifra(){
	char cifra;
	int nCifra;
	cifra=getch();
	while((cifra<'0'&&cifra!=INVIO)||(cifra>'9')){
		cifra=getch();
	}
	nCifra=cifra-'0';
	return(nCifra);
}
int leggiNumero()
{
	int lCifra;
	int cifra,n;
	n=0;
	lCifra=1;
	cifra=leggiCifra();
	while(cifra>=0&&lCifra<10){
		n=n*10+cifra;
		printf("%d",cifra);
		cifra=leggiCifra();
		lCifra++;
	}
	return(n);	
}
int perfetto(int n){
	 	int sd,div,r;
	 	sd=0;
		 for(div=1;div<=n/2;div++){
		 	r=n%div;
		 	if(r==0){
		 		sd=sd+div;
			 }
		 }
		 return(sd);
 }
int main(int argc, char *argv[]) {
	int numero,sd;
	printf("Metti un numero");
	numero=leggiNumero();
	sd=perfetto(numero);
	if(numero==sd){
		printf("\n%d PERFETTO");
	}else{
		prinf("\nNO PERFETTO");
	}
	return 0;
}
