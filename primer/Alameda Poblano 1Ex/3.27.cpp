#include<stdio.h>
int main(){
	int counter,number,largest,la;
	largest=0;
	la=0;
	for(counter=1;counter<=10;counter++){
		printf("%d Ingresa el numero: ",counter);
		scanf("%d",&number);
		if(number>la){
			largest=la;
			la=number;
		}
		else{
			largest=la;	
		}
	}
	printf("************************************\n");
	printf("El numero mayor es: %d \n",largest);
	printf("El segundo numero mayor es: %d",la);
	return 0;
}
