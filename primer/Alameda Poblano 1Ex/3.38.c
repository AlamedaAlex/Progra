#include <stdio.h>
int main()
{
	int i; 
	for (i = 0; i < 100; i++)
	{
		if(i%10 == 0)
			printf("\n");
		printf("*");
	}
	return 0;
}

