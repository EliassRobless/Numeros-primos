#include <stdio.h>
int numPrimo (int numero),i;

int main (void) {
    int numero;      //variable
    printf("Escribe un numero entero positivo:  \n");
    scanf("%d",&numero);   //entrada
    if (numPrimo(numero)) {
           printf("Es un numero primo");   //salida
    } else {
         printf("No es un numero primo");   //salida
    }
    return 0;
}
int numPrimo(int numero) {
   if (numero == 0 || numero == 1) return 0;

   if (numero == 4) return 0;
   for (i = 2; i < numero / 2; i++) {

    if (numero % i == 0) return 0;
    }  

     return 1;
}
