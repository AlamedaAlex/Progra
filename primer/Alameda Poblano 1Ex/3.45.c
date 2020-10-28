#include <stdio.h>
int main()
{
	float a,b,c,ban;
	ban=0;
	printf("Introduce el lado a\n");
	scanf("%f",&a);

	printf("Introduce el lado b\n");
	scanf("%f",&b);
	printf("Introduce el lado c\n");
	scanf("%f",&c);

	if(a>=b && a>=c){
		if((c*c) == (a*a)+(b*b)){
		ban=1;
	}
	}else if(b>=a && b>=c){
		if((c*c) == (a*a)+(b*b)){
		ban=1;
	}
	}else if(c>=b && c>=a){
		if((c*c) == (a*a)+(b*b)){
		ban=1;
	}
	}
	if(ban=0)
		printf("Si se puede hacer un triangulo rectangulo\n");
	else
		printf("No se puede hacer un triangulo rectangulo\n");
	return 0;
}

