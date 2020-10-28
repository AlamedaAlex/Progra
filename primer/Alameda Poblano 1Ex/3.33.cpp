#include<stdio.h>
int main(){
	int la,i,j;
	printf("Ingrese el lado del cuadrado: \n");
	scanf("%d",&la);
	if(la<=20)
	for(i=1;i<=la;i++){
		for(j=1;j<=la;j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
