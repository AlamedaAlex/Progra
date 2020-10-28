#include<stdio.h>
int main(){
float ve,re ;
 for(;ve>=0;){
 	printf("Ventas en dolares: \n");
 	scanf("%f",&ve);
 	if(ve==-1){
	 }
	 else{
	 	re=(ve*.09)+200;
	 	printf("\n\tSalario: %f\t\n",re);
	 	printf("************************************************\n");
	 }
 }
 return 0;
}
