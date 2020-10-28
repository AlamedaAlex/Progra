#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
	char cad[30];
	int edad;
	FILE *ptrD,*ptrO;
	ptrO=fopen("argv[1]","r");
	ptrD=fopen("argv[2]","w");
	if(argc!=3){
		printf("El numero de argumentos no e correcto\n");
		exit(0);
	}
	while(fscanf(ptrO,"%s %d",cad,&edad)!=EOF){
		fprintf(ptrD,"%d %s\n",edad,cad);
	}
	fclose(ptrO);
	fclose(ptrD);
	return 0;
}
