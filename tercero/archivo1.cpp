#include<stdio.h>
#include<stdlib.h>

int main(){
	char cad[30];
	int edad;
	FILE *ptrD,*ptrO;
	ptrO=fopen("a0.txt","r");
	ptrD=fopen("a1.txt","w");
	while(fscanf(ptrO,"%s %d",cad,&edad)!=EOF){
		fprintf(ptrD,"%d %s\n",edad,cad);
	}
	fclose(ptrO);
	fclose(ptrD);
	return 0;
}
