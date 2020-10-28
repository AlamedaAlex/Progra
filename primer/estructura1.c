#include <stdio.h>
struct empleado{
	char nombre[20];	//20 bytes 
	int edad;			//5 bytes
	float est;			//4 bytes
	char sexo;			//1 bytes
 }; 
int main(){
	struct empleado emp1;  //tipo de dato [struct empleado]--Instancia [emp1]
	printf("\n El tamano del tipo de dato empleado tiene %lu bytes\n",sizeof(struct empleado));
	printf("Ingresa el nombre: \n");
	fgets(emp1.nombre,20,stdin);
	setbuf(stdin,NULL);   	//liberar bufer
	printf("Ingrese la edad: \n");
	scanf("%d",&emp1.edad);
	setbuf(stdin,NULL);
	printf("Ingrese la estatura:  \n");
	scanf("%f",&emp1.est);
	setbuf(stdin,NULL);
	printf("Ingrese el sexo: \n");
	scanf("%c",&emp1.sexo);
	//setbut(stdin,NULL);

	printf("\n La cadena %s esta en la direccion %p",emp1.nombre,&emp1.nombre);
	printf("\n La edad %d esta en la direccion %p",emp1.edad,&emp1.edad);
	printf("\n La estatura %f esta en la direccion %p",emp1.est,&emp1.est);
	printf("\n El sexo %c esta en la direccion %p",emp1.sexo,&emp1.sexo);
	return 0;
}
