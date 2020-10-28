#include <stdio.h>

int main(){
    
    int lado;
    int contador = 1;
    int contador2 = 1;
    
    printf("Ingrese la medida de los lados del cuadrado: ");
    scanf("%d", &lado);
    printf(" \n");
    
    for (;contador2 < lado+1;){
          contador = 1;
          for (;contador < lado+1;){
                if (contador2 == 1)
                   printf("* ");
                if (contador2 != 1)
                   if (contador2 != lado){
                      if (contador == 1)
                         printf("* ");
                      else
                          if (contador < lado)
                             printf("  ");
                          else
                              printf("* ");
                              }
                   else 
                        printf("* ");
                contador++;    
          }
          printf(" \n");
          contador2++;
    }
    printf(" \n");
    return 0;
}
