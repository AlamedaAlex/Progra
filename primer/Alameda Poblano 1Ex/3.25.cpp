#include<stdio.h>
int main(){
	int con,a,b,c;
	printf(" N\t10*N\t100*N\t1000*N\t \n\n");
	for(con=1;con<=10;con++){
		a=con*10;
		b=con*100;
		c=con*1000;
	printf(" %d\t%d\t%d\t%d\n",con,a,b,c);
	}
	return 0;
}
