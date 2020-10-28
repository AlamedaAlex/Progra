#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE*ptrF;
	char car;
	ptrF=fopen("B3.txt","w");
	printf("\n Ingresa texto desde el teclado para guardar en un archivo \n");
	
	for(;(car=getchar())!='\n';)
	{
		fputc(car,ptrF);
	}
	fclose(ptrF);
	
	return 0;
}
