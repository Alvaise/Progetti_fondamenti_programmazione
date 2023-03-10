#include <stdio.h>
#include <stdlib.h>
#define NT 10
/* stampa le tabelline da 2 a 9 */
void tabellina(){
	int n,m,t;
	for(m=2;m<10;m++){
	
	for(t=1;t<=NT;t++){
		n=m*t;
		printf("%d ",n);
	}
	printf("\n");
 
}
}
int main(int argc, char *argv[]) {
	tabellina();
	return 0;
}
