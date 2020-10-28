#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int ContadorDeLinea( char c );
int ContadorDeColumnas(char c);
int CompararCadena( char *pt1, char *pt2 );

int OpcionMenu( char *pt1 );
char* SeleccionarOperacion( char *pt1 );
char* SeleccionarElementos( char *pt1 );
char* SeleccionarCaracteres( char *pt1 );
char cambiarC1C2( char cO, char *c1, char *c2 );

int main(int argc, char const *argv[]){

	int Elem[40],i=0,cont=1,band=0;
	char car,a[40],b[40],c[40],ptStr[40],sep[]="n",sep2[]="_";
    char *tro = NULL;
int co=0;
	
	strcpy( a, argv[2] );
	strcpy( b, argv[2] );
	strcpy( c, argv[2] );
	
	FILE *ptFO,*ptFD;
		ptFO = fopen( argv[1], "r" );
		ptFD = fopen( argv[3], "w" );
		//Se valida si el archivo de origen se puede abrir o si existe
			if (ptFO == NULL){
			 		printf("\t¡ERROR! No se pudo abrir el archivo\n");
			 		return 0;
			}

			switch( OpcionMenu( SeleccionarOperacion( a ) ) ){
				case 1:

				    tro = strtok( SeleccionarElementos( b ), sep);

				    do {
				    	Elem[i] = atoi(tro);
				        tro = strtok( NULL, sep);
				        i++;
				    }while( tro != NULL );

				    i=0;

					while( ( car=fgetc( ptFO ) ) != EOF ){

	 					if ( Elem[i]==cont ){
	 						fputc( car , ptFD );
	 						if ( car=='\n' )
	 							i++;
	 					}

						cont=cont+ContadorDeLinea( car );
	 				}

					break;
				case 2: tro = strtok( SeleccionarElementos( b ), sep);

				    do {
				    	Elem[i] = atoi(tro);
				        tro = strtok( NULL, sep);
				        i++;
				    }while( tro != NULL );
				     i=0;
				while( ( car=fgetc( ptFO ) ) != EOF ){

	 					if ( Elem[i]==cont ){
	 						fputc( car , ptFD );
	 						if ( car==' ')
	 							i++;
	 					}

						cont=cont+ContadorDeColumnas( car );
						
	 				}
					// printf("%d",cont);
					break;
				case 3:
					tro = strtok( SeleccionarElementos( b ), sep);

				    do {
				    	Elem[i] = atoi(tro);
				        tro = strtok( NULL, sep);
				        i++;
				    }while( tro != NULL );

				    i=0;

					while( ( car=fgetc( ptFO ) ) != EOF ){

	 					if ( Elem[i]==cont ){
							 
	 						if ( car=='\n' )
	 							{
	 							fprintf(ptFD,"\n");	
	 							i++;
								 }
	 					}
						fputc( car , ptFD );
						cont=cont+ContadorDeLinea( car );
	 				}
					break;
				case 4:
					tro = strtok( SeleccionarElementos( b ), sep);

				    do {
				    	Elem[i] = atoi(tro);
				        tro = strtok( NULL, sep);
				        i++;
				    }while( tro != NULL );
				     i=0;
				while( ( car=fgetc( ptFO ) ) != EOF ){

	 					if ( Elem[i]==cont ){
	 						
	 						if ( car==' '){
	 							fprintf(ptFD,"\t");
							 	i++;
							 }
	 					}
						fputc( car , ptFD );
						cont=cont+ContadorDeColumnas( car );
						
	 				}
					break;
				case 5:

					strcpy ( ptStr, SeleccionarCaracteres( c ) );

					cont=0;

					char *ptrF=ptStr;

					while( ( car=fgetc( ptFO ) ) != EOF ){
						if (*ptrF==car || *ptrF=='\0'){
							ptrF++;
							band=1;
						} else{
							ptrF=ptStr;
							band=0;
						}
						if ( car==' ')
							cont=cont+band;
						
					}

	 				fprintf( ptFD, "La cadena %s se repite: %d", ptStr, cont-2);

					break;
				case 6:
					break;
				case 7:
					break;
				case 8:
					break;
				case 9:

					tro = strtok( SeleccionarCaracteres( c ), sep2);

					char c1[5], c2[5];

				    while( tro != NULL ) {
				    	if (i==0)
				    		strcpy( c1, tro );
				    	strcpy( c2, tro );

				        tro = strtok( NULL, sep2);
				        i++;
				    }

					while( ( car=fgetc( ptFO ) ) != EOF )
	 				fputc( cambiarC1C2( car, c1, c2 ), ptFD );

					break;
				case 10:
					while( ( car=fgetc( ptFO ) ) != EOF ){
						
						fputc( tolower(car), ptFD );
							
					
				}
					break;
				case 11: 
					while( ( car=fgetc( ptFO ) ) != EOF ){
	 				
						fputc( toupper(car), ptFD );
				     }
					break;
				case 12:
					fprintf(ptFD,"\t%d\t",cont);
						while( ( car=fgetc( ptFO ) ) != EOF ){
							cont=cont+ContadorDeLinea( car );
							fputc( car , ptFD );
	 						if ( car=='\n' )
	 							fprintf(ptFD,"\t%d\t",cont);
	 							
						
						
	 				}
					break; 
				default: printf("\t comando incorrecto \t");
			}

		
	fclose( ptFD );
	fclose( ptFO );

	return 0;
}

char* SeleccionarOperacion( char *pt1 ){
	char *pt2=pt1;
	for ( ;*pt2!='\0';pt2++ )
		if(*pt2=='n' || *pt2=='_')
			*pt2='\0';
	return pt1;
}

int CompararCadena( char *pt1, char *pt2 ){
	for ( ;*pt1!='\0';pt1++, pt2++ )
		if ( *pt1!=*pt2 )
			return 0;
	return 1;
}

int OpcionMenu( char *ptr1 ){
	char
		L[2]="L",
		C[2]="C",
		IL[3]="IL",
		IC[3]="IC",
		CC[3]="CC",
		CP[3]="CP",
		CS[3]="CS",
		SS[3]="SS",
		SC[3]="SC",
		SMm[4]="SMm",
		SmM[4]="SmM",
		INC[4]="INC";

	if ( CompararCadena(ptr1, L) )
		return 1;
	else if ( CompararCadena(ptr1, C) )
		return 2;
	else if ( CompararCadena(ptr1, IL) )
		return 3;
	else if ( CompararCadena(ptr1, IC) )
		return 4;
	else if ( CompararCadena(ptr1, CC) )
		return 5;
	else if ( CompararCadena(ptr1, CP) )
		return 6;
	else if ( CompararCadena(ptr1, CS) )
		return 7;
	else if ( CompararCadena(ptr1, SS) )
		return 8;
	else if ( CompararCadena(ptr1, SC) )
		return 9;
	else if ( CompararCadena(ptr1, SMm) )
		return 10;
	else if ( CompararCadena(ptr1, SmM) )
		return 11;
	else if ( CompararCadena(ptr1, INC) )
		return 12;

	return -1;
}
int ContadorDeLinea( char c ){
	if ( c=='\n' )
		return 1;
	return 0;
}

int ContadorDeColumnas(char c){
	if( c==' '||c=='\n')
		return 1;
	return 0;
}
char* SeleccionarElementos( char *pt1 ){
	char *pt2=pt1, *ptF=pt2;
	for ( ;*pt1!='\0';pt1++ )
		if ( *pt1>='0' && *pt1<='9' || *pt1=='n' ){
			*pt2=*pt1;
			pt2++;
		}
	*pt2='\0';
	return ptF;
}

char cambiarC1C2( char cO, char *c1, char *c2 ){
	if ( *c1==cO )
		return *c2;
	return cO;
}

char* SeleccionarCaracteres( char *pt1 ){
	for ( ;*pt1!='_';pt1++ );
	return pt1+1;
}
