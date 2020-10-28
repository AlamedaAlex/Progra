#include<stdio.h>
int main(){
	float ga,mi,re,i,pro;
	ga=0;
	int con;
	con=0;
	for(;ga>=0;){
	printf("Ingrese la galones usados(-1 para salir): \n");
	scanf("%f",&ga);
	if(ga==-1){
	}
	else{
	printf("Ingrese las millas recorridas: \n");
	scanf("%f",&mi);
	re=mi/ga;
	i=re+i;
	con=con+1;
	printf("\n Millas por Galon: %f \n",re);
}
}
printf("%f",i);
pro=i/con;
printf("\n Promedio de Millas por Galon: %f ",pro);
	return 0;
} 
