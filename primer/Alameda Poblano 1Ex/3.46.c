#include <stdio.h>
int main()
{	
	int num,digi,i,x,array[4],aux;
	printf("Introduce un numero de 4 digitos: \n");
	scanf("%i",&num);
	for(i=0;num>0;i=i+1){
		digi = num % 10;
		num = num / 10;
		array[i] = digi +7;
	}
	aux = array[0];
	array[0] = array[2];
	array[2]=aux;
	aux = array[1];
	array[1] = array[3];
	array[3]= aux;
	printf("El entero cifrado es:\n");
	for (x = 0; x < 4; x=x+1)
	{
		printf("%i", array[3-x]);
	}
	return 0;
}
