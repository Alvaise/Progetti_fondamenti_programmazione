#include <stdio.h>
#include <stdlib.h>
#define DIM 26
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char parola[DIM], l;
	int i;
	l='a';
	for(i=0;i<=DIM;i++){
		parola[i]=l;
		l++;
	}
	for(i=0;i<DIM;i++){
		printf("\nparola[%d] = %c",i,parola[i]);
	}
	printf("\n");
	for(i=DIM-1;i>=0;i--){
		printf("\nparola[%d] = %c",i,parola[i]);
	}
	return 0;
}
