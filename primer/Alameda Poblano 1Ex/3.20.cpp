#include<stdio.h>
int main(){
	float in,pr,ra,day;
	while(pr>=0){
		printf("\n ingrese principal: \n");
		scanf("%f",&pr);
		if(pr==-1){
		}
		else{
			printf("\nIngrese rate: \n");
			scanf("%f",&ra);
			printf("\nIngrese dias: \n");
			scanf("%f",&day);
			in=pr*((ra*day)/365);
			printf("\nEl Interes es: %f \n",in);
			printf("*****************************************\n\n");
		}
	}
	return 0;
}
