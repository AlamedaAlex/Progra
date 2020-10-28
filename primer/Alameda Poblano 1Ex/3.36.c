#include <stdio.h>
int elevar (int x,int y);
int main()
{
	unsigned long num;
	printf("introduce el numero con 1s y 0s \n");
	scanf("%li",&num);
	unsigned long r1,cont,suma;
	for(cont=0;num > 0;cont=cont+1){
		r1 = num % 10;
		num = num / 10;
		if(r1 == 1){
			suma += elevar(2,cont);
		}
		cont++;
	}
	printf("El equivalente decimal es: %li\n", suma);
	return 0;
}


int elevar(int x,int pot){
	long cont=1;
	int i;
	if(pot == 0)
		return 1;
	for (i = 0; i < pot; ++i)
	{	
		cont *= x; 
	}

	return cont;
}


