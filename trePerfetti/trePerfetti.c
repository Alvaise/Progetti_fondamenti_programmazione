#include <stdio.h>
#include <stdlib.h>
#define ND 4
/* trova i primi 3 numeri perfetti */
/** determina se n e perfetto
*@param n numero da verificare
*@return 1 se n e perfetto
*/
 int perfetto(int n){
	 	int p,sd,div,r;
	 	p=0;
	 	sd=0;
		 for(div=1;div<=n/2;div++){
		 	r=n%div;
		 	if(r==0){
		 		sd=sd+div;
			 }
		 }
		 if(sd==r){
		 	p=1;
		 }
		 return(p);
 }
int main(int argc, char *argv[]) {
	int n,cp,p;
	for(n=2,cp=0;cp<3;n++){
		p=perfetto(n);
		if(p==1){
			printf("%d",n);
			cp++;	
		}
	}
	return 0;
}
