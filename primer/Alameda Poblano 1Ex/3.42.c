#include <stdio.h>
int main()
{
	float rad,pi,dia,cir,are;
	pi=3.1416;
	printf("Introduce el radio del circulo\n");
	scanf("%f",&rad);
	dia=2*rad;
	cir=2*pi*rad;
	are=pi*(rad*rad);
	printf("El diametro es: %f \n La circunferencia: %f \n El area: %f\n",dia,cir,are);
	return 0;
}

