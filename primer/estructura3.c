#include <stdio.h>
struct empleado{
	char nombre[20];	//20 bytes 
	int edad;			//5 bytes
	float est;			//4 bytes
	char sexo;			//1 bytes
 }; 
int main(){
	struct empleado emp1,*ptrS,arre[5];  //tipo de dato [struct empleado]--Instancia [emp1]
	int i;
	ptrS=&emp1;
	printf("\n El tamño del tipo de dato empleado tiene %lu bytes\n",sizeof(struct empleado));
	for(i=0;i<=5;i++){
	printf("Ingresa el nombre: \n");
	fgets(ptrS->nombre,20,stdin);
	setbuf(stdin,NULL);   	//liberar bufer
	printf("Ingrese la edad: \n");
	scanf("%d",&ptrS->edad);
	setbuf(stdin,NULL);
	printf("Ingrese la estatura:  \n");
	scanf("%f",&ptrS->est);
	setbuf(stdin,NULL);
	printf("Ingrese el sexo: \n");
	scanf("%c",&ptrS->sexo);
	setbut(stdin,NULL);
	printf("\n***********************************************************************************");
}
	for(i=0;i<=5;i++){
	printf("\n El puntero ptrS tiene la direccion %p",ptrS);
	printf("\n La cadena %s esta en la direccion %p",ptrS->nombre,&ptrS->nombre);
	printf("\n La edad %d esta en la direccion %p",ptrS->edad,&ptrS->edad);
	printf("\n La estatura %f esta en la direccion %p",ptrS->est,&ptrS->est);
	printf("\n El sexo %c esta en la direccion %p",ptrS->sexo,&ptrS->sexo);
}
	return 0;
}
