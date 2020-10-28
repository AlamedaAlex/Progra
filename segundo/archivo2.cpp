#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE*ptrD;
	ptrD=fopen("B3.txt","w");
	fputs("Escuela Superior de Computo\n",ptrD);
	fputs("Instituto Politacnico Nacional\n",ptrD);
	fputs("Zacatenco\n",ptrD);
	fclose(ptrD);
	
	return 0;
}
