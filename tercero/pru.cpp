#include<stdio.h>
char index(char *ptr,char car);
int main(){
	char cad[30],car;
	printf("Ingresa una cadena: \n");
	gets(cad);
	printf("Ingresa un caracter: \n");
	car=getchar();
	printf ("Su pocicion es : \n",index(cad,car));
	return 0;
}

char index(char *ptr,char car){
	char *ptrF=ptr;
	for(;*ptr!='\0';ptr++)
	if(*ptr==car)
	return (int)(ptr-ptrF);
	return -1;
}
