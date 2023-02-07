#include <stdio.h>
#include <stdlib.h>
#define N 5
/* calcolo la media dei valori positivi */

int main(int argc, char *argv[]) 
{
	int c,cp,num,sp;
	float mp;
	sp=0;
	cp=0;
	for(c=0;c<N;c++)
	{
		printf("Inserire valore: ");
		scanf("%d", &num);
		if(num>0)
		{
			sp=sp+num;
			cp++;
		}
	}
	if(cp>0)
	{
		mp=(float)sp/cp;
		printf("\nmedia positivi = %g\n", mp);
	}
	else
	{
		printf("Non hai inserito valori positivi");
	}
	return 0;
}
