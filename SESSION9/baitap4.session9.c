#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	a=5;
	printf ("nhap vao so dong:");
	scanf ("%d", &a);
	printf ("hien thi phan a:\n");
	for (b=0; b<a; b++){
		printf("\n");
	    for (c=1;c<=b+1; c++)
	     printf("%d", c);
	}
	printf ("\n");
	printf ("hien thi phan b:\n");
	for (b=1; b<a; b++){
		printf ("\n");
		for (c=b; c<a;c++)
		printf ("%d",c);
	}
	
	
	
	
	
	
	return 0;
}
