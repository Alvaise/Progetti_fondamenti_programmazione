#include <stdio.h>
#include <stdlib.h>

/* programma che trasforma dal decimale a binario */

int main(int argc, char *argv[]) {
	int n,r,res;
	printf("Inserire numero: ");
	scanf("%d",&n);
	printf("\n");
	while(n!=0){
		res=n/2;
		r=n%2;
		n=res;
		printf("%d",r);
	}
	return 0;
}
