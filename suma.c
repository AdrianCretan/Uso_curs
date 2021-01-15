#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int a,b,suma;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	suma = a+b;

	printf("%d",suma);

	return 0;
}
