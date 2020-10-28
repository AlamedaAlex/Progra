#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char cad1[40],cad2[40],cad3 [40];
	FILE*ptrF;
	ptrF=fopen("B3.txt","r");
	fgets(cad1,40,ptrF);
	fgets(cad2,40,ptrF);
	fgets(cad3,40,ptrF);
	puts(cad1);
	puts(cad2);
	puts(cad3);
	fclose(ptrF);
	return 0;
}
