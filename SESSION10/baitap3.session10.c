#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	printf ("in ra bang cuu chuong:\n");
	scanf ("%d", &c);
	
    c=a*b;
	for (a=1; a<=9; a++)
	   for (b=1; b<9; b++){
	   printf ("%d=%d*%d\n",c,a,b);
	   }
	return 0;
}
