#include<stdio.h>
int main(){
	int a;
	a=0;
	for(;a!=1&&a!=2;){
		printf("Si el numero es diferente a 1 o 2 el ciclo continua:");
		scanf("%d",&a);
	}
	return 0;
}
