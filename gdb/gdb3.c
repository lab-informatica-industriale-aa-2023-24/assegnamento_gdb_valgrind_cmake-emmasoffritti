// gdb3.c
#include<stdio.h>

int fattoriale(int x)
{
	int result = 1;
	while (x>1){
		x--;
		result*=x;
	}
 	return result;
}


int main()
{
	int n = 10;

	int val = fattoriale(n);

	printf("Fattoriale di %d, %d\n", n, val);

	return 0;
}