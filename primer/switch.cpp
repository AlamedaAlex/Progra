#include<stdio.h>
#include<stdlib.h>
int menu();
int suma(int n1,int n2);
int rest(int n1,int n2);
int mult(int n1,int n2);

int main(){
	int num1,num2,selec,resul;
	for(;;){
		selec=menu();
		switch(selec){
		case 1:
			printf("\nSuma:");
			printf("\nIngrese el primer operando: ");
			scanf("%d",&num1);
			printf("\nIngrese el segundo operando: ");
			scanf("%d",&num2);
			resul=suma(num1,num2);
			printf("\nEl resultado es: %d\n",resul);
			break;
		case 2:
			printf("\nResta:");
			printf("\nIngrese el primer operando: ");
			scanf("%d",&num1);
			printf("\nIngrese el segundo operando: ");
			scanf("%d",&num2);
			resul=rest(num1,num2);
			printf("\nEl resultado es: %d\n",resul);
			break;
		case 3:
			printf("\nMultiplicacion:");
			printf("\nIngrese el primer operando: ");
			scanf("%d",&num1);
			printf("\nIngrese el segundo operando: ");
			scanf("%d",&num2);
			resul=mult(num1,num2);
			printf("\nEl resultado es: %d\n",resul);
			break;
		case 4:
			exit(0);
		default:
			printf("\n******_Ingrese un valor del 1-4_******\n");
	}	
	}
	return 0;

}
 

int menu(){
	int opc;
	printf("...............................................................");
	printf("\n1_Suma\n2_Resta\n3_Multiplicacion\n\n4_Salir");
	printf("\n************************************************************");
	printf("\nIngresa la opcion:");
	scanf("%d",&opc);
	return opc;
}
int suma(int n1,int n2){
	return(n1+n2);
}
int rest(int n1,int n2){
	return(n1-n2);
}
int mult(int n1,int n2){
	return(n1*n2);
}

	
