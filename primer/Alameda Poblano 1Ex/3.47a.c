#include <stdio.h>
int main()
{	
	int num;
	unsigned long fac;
	fac=1;
	printf("Introduce un numero (sin signo negativo): \n");
	scanf("%i",&num);
	for (int i = num; i > 0; i--)
	{
		fac *= i;
	}
	printf("%li\n", fac);
	return 0;
}
