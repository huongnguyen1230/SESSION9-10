#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	char i, ans;
	i= ' ';
	do
	{ 
	    x=0;
	    ans= 'y';
	    printf ("enter sequence of character:\n");
	    do{
	    	i=getchar();
	    	x++;
		}while (i!='\n');
		i= ' ';
		printf ("number of character entered is:%d", --x);
		printf ("more sequence (Y/N)?");
		ans = getchar();
	}while(ans=='Y');
	

}
