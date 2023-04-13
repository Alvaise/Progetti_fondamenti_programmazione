#include <stdio.h>
#include <stdlib.h>

/* calcolo maggiore e minore  */

/** restituisce il valore massimo su n valori letti
*@param n numero di valori da leggere
*@return il massimo fra i valori letti ( anche non unico)
*/
int max(int n){
	int max, num,c;
	printf("Inserire numero: ");
	scanf("%d",&num);
	max=num;
	for(c=1;c<n;c++){
		printf("Inserire numero: ");
		scanf("%d",&num);
		if(num>max){
			max=num;
		}
	}
	return max;
}

int main(int argc, char *argv[]) {
//	int m,M,n,c;
//	printf("Inserire numero: ");
//	scanf("%d",&n);
//	m=n;
//	M=n;
//	for(c=1;c<5;c++){
//		printf("Inserire numero: ");
//		scanf("%d",&n);
//		if(n<m){
//			m=n;
//		}
//		if(n>M){
//			M=n;
//		}
//	}
//	printf("\nIl maggiore e %d",M);
//	printf("\nIl minore e %d",m);
	int massimo;
	massimo = max(5);
	printf("Il max : %d", massimo);
	return 0;
}
