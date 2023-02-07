#include <stdio.h>
#include <stdlib.h>

/* Numeri Primi */
int primo(int n)
{
	int div,p;
	div=(float)n/2;
	p=0;
	while(div>1||p==1)
	{
		if(n%div==0)
		{
			p==1;
		}
	}
	return(p)
}
int main(int argc, char *argv[]) {
	int p,n;
	printf("Inserire valore: ");
	scanf("%d",&n);
	p=primo(n);
	if(p==1)
	{
		printf("No numero primo");
	}
	else
	{
		printf("numero primo");
	}
	return 0;
}
