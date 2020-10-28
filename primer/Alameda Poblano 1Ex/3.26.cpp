#include<stdio.h>
int main(){
	int con,a,b,c;
	printf(" N\t10*N\t100*N\t1000*N\t \n\n");
	for(con=3;con<=15;con=con+3){
		a=con+2;
		b=con+4;
		c=con+6;
	printf(" %d\t%d\t%d\t%d\n",con,a,b,c);
	}
	return 0;
}
