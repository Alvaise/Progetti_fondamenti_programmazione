#include <stdio.h>
#include <stdlib.h>
#define NP 100 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int nDivisori(int n){
	int nDiv, div, r;
	nDiv=0;
	
	for(div=2;div<=n/2;div++){
		r=n%div;
		if(r==0){
			nDiv++;
		}
	}
	return(nDiv);
}
int main(int argc, char *argv[]) {
	int cp,n,np;
	cp=0;
	for(n=2;n<NP;n++){
		np=nDivisori(n);
		if(np==0){
			printf("%d ",n);
			cp++;
		}
	}
	return 0;
}
