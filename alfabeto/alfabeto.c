#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char car;
	/*for(car='a';car<='z';car++)
	{
		printf("%c ", car);
	}
	printf("\n");
	for(car='Z';car>='A';car--)
	{
		printf("%c ",car);
	}*/
	/*car=getche();
	while(car<='z')
	{
		printf("%c",car)
		car++;
	}
	*/
	car=getch();
	
	while(car<='9')
	{
		printf("%c ",car);
		car++;
	}
	
	
	return 0;
}
