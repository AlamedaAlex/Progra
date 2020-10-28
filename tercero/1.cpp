#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char const *argv[]){
	char car;
	FILE *ptFO,*ptFD;
		ptFO = fopen( argv[1], "r" );
		ptFD = fopen( argv[3], "w" );

   while( ( car=fgetc( ptFO ) ) != EOF ){
	 					if ( car>='a' && car<='z' ){
						fputc( toupper(car), ptFD );
					printf("si");
					}
					else{
						fputc( car, ptFD );
			printf("no");			
					}
					 }
	fclose( ptFD );
	fclose( ptFO );
   return 0;
}
