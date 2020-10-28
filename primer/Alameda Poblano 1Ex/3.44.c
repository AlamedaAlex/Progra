#include <stdio.h>
int main()
{
	float a,b,c,ban;
	ban=0;
	printf("Introduce el lado a: \n");
	scanf("%f",&a);
	printf("Introduce el lado b: \n");
	scanf("%f",&b);
	printf("Introduce el lado c: \n");
	scanf("%f",&c);
	if(a+b > c)
		printf("Si se puede construir el rectangulo\n");
	else 
		printf("No se puede construir el rectangulo\n");
	return 0;
}
