#include <stdio.h>
int main()
{
	int i,x;
	for (i=0;i<8;i++)
	{
		if(i%2 == 0)
			printf(" ");
		for (x=0;x<8;x++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

