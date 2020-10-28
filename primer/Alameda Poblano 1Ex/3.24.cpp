#include<stdio.h>
int main(){
	int counter,number,largest;
	largest=0;
	for(counter=1;counter<=10;counter++){
		printf("%d Ingresa el numero: ",counter);
		scanf("%d",&number);
		if(number>largest){
			largest=number;
		}
	}
	printf("************************************\n");
	printf("El numero mayor es: %d",largest);
	return 0;
}
