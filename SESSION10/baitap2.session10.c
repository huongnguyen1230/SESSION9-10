#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	a=9;
	printf ("chuong trinh day so:\n");
	scanf ("%d", &a);
	printf ("\n");
	for (b=0; b<=a; b++)
	{
		printf("\n");
		for(c=1; c<=b; c++)
		printf ("%d", c);
		}
	
	return 0;
}
