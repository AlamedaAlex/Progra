#include<stdio.h>
int main(){
	float hor,pa,sa,ex;
	for(;hor>=0;){
		printf("Ingrese las horas trabajadas: \n");
		scanf("%f",&hor);
		if(hor==-1){
			
		}
		else{
			printf("\n Introducir tarifa por hora del trabajador: \n");
			scanf("%f",&pa);
			if(hor<=40){
				sa=hor*pa;
			}
			else{
				ex=(hor-40)*(pa+(pa/2));
				sa=(40*pa)+ex;
			}
			printf("\n El salario es: %f\n",sa);
			printf("********************************************************\n");
		}
	}
	return 0;
}
