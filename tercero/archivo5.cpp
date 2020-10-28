#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
	char car;
	FILE *ptrF;
	ptrF = fopen(argv[1],"r");
	
	if(ptrF==NULL){
		printf ("\n No se pudo abrir el archivo \n");
		exit(1);
	}
	while((car = fgetc(ptrF))!=EOF)
	printf("%c",car);
	fclose(ptrF);
	return 0;
}


