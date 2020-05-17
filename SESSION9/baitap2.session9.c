#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2,sum;
	printf ("nhap gia tri: \n", num1);
	scanf ("%d", &num1);
	printf ("nhap gia tri :\n", num2);
	scanf ("%d", &num2);
	
    for (i=num1; i<=num2;i++)
	    {
			if (i%2!=0)
	       	 	sum+=i;
		}
	
	printf ("tong so le: %d\n", sum);
	
	return 0;
}
