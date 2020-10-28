#include <stdio.h>
int main()
{	
	int entero,cont,mod;
	printf("Introduce un entero\n");
	scanf("%d",&entero);
	for(cont=0;entero>0;){
		mod = entero % 10;
		entero = entero/10;
		if(mod == 7){
			cont=cont+1;
		}
	}
	printf("Hay %d 7s en el entero\n", cont);
	return 0;
}

