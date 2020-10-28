#include <stdio.h>
struct empleado{
	char nombre[20];	//20 bytes 
	int edad;			//5 bytes
	float est;			//4 bytes
	char sexo;			//1 bytes
 }; 
int main(){
	struct empleado emp1,arrr[5];  //tipo de dato [struct empleado]--Instancia [emp1]
	int i=0;
	printf("\n El tamño del tipo de dato empleado tiene %lu bytes\n",sizeof(struct empleado));
	for(i=0;i<=5;i++){
	//setbuf(stdin,NULL);
	printf("Ingresa el nombre: \n");
	fgets(arrr[i].nombre,20,stdin);
	setbuf(stdin,NULL);   	//liberar bufer
	printf("Ingrese la edad: \n");
	scanf("%d",&arrr[i].edad);
	setbuf(stdin,NULL);
	printf("Ingrese la estatura:  \n");
	scanf("%f",&arrr[i].est);
	setbuf(stdin,NULL);
	printf("Ingrese el sexo: \n");
	scanf("%c",&arrr[i].sexo);
	//setbuf(stdin,NULL);
printf("\n***********************************************************************************");
	}
printf("\n");
	for(i=0;i<=5;i++){
	printf("\n La cadena %s esta en la direccion %p",arrr[i].nombre,&emp1.nombre);
	printf("\n La edad %d esta en la direccion %p",arrr[i].edad,&emp1.edad);
	printf("\n La estatura %f esta en la direccion %p",arrr[i].est,&emp1.est);
	printf("\n El sexo %c esta en la direccion %p",arrr[i].sexo,&emp1.sexo);
	printf("\n********************************************************************************");
	printf("\n");

}
return 0;
}
