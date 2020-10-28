#include<stdio.h>
#include<stdlib.h>
struct nodo{
	char nombr[32];
	int edad;
	float est;
	};
	int main(){
		struct nodo *ptr;
		long cont=0;
	for(;;){
		ptr=(struct nodo *)malloc(sizeof(struct nodo));
		if (ptr!=NULL){
			cont=cont+1;
			printf("\nNodo %d",cont);
		}
			else{
				break;	
			}
	}
	printf("El nombre del nodo el %lu",cont);
	return 0;
}
	
