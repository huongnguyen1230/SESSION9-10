#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2,sum;
	printf ("nhap gia tri: \n", num1);
	scanf ("%d", &num1);
	printf ("nhap gia tri :\n", num2);
	scanf ("%d", &num2);
	
    sum=num1+num2;
	 if (sum%2!=0)
	    for (num1=1;num1<num2; num1+=2)
	    {
	    	printf ("%d\n", sum=num1+num2);
		}
	


			

	
	return 0;
}
