#include <stdio.h>
int main()
{
	unsigned long int cont; 
	for(cont=1;cont <= 3000000;cont=cont+1){
		if(cont % 1000000 == 0){
			printf("LLego a los 1000000\n");
		}
	}
	return 0;
}

