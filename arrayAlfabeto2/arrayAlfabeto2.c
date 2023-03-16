#include <stdio.h>
#include <stdlib.h>
#define DIM 26
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	char alfabeto[DIM];
	char l='z';
	for(i=0;i<DIM;i++){
		alfabeto[i]=l;
		printf(" %c ",alfabeto[i]);
		l--;
	}
	return 0;
}
