#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int cnt,num;
	cnt=num=0;
	
	do 
	{
		printf ("enter a number :\n");
		scanf ("%d", &cnt);
		printf ("no. is %d\n", cnt);
		num++;
	} while (cnt!=0);
	printf ("the total numbers entered were %d\n", --num);
return 0;
}
