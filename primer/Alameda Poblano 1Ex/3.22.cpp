#include<stdio.h>
int main(){
	int x,a,b,n;
	printf("Ingresa un numero: \n");
	scanf("%d",&x);
	printf("1_Posdecremento\n2_Predecremeto\n\n");
	scanf("%d",&n);
	
	if(n==1){
		printf("El valor de ingresado es %d\n",x);
		b=x++;
		printf("Y con posdecremento %d\n",b);
	}
	else{
		if(n==2){
			printf("El valor de ingresado es %d\n",x);
		b=++x;
		printf("Y con predecremento %d\n",b);
		}
	}
	return 0;
}
