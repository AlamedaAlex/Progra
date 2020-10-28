//lectura de un archivo
#include<stdio.h>
#include<stdlib.h>
int main(){
	char car;
	FILE *ptrF;
	ptrF = fopen("archivo.txt","r");
	
	if(ptrF==NULL){
		printf ("\n No se pudo abrir el archivo \n");
		exit(1);
	}
	while((car = fgetc(ptrF))!=EOF)
	printf("%c",car);
	fclose(ptrF);
	return 0;
}
