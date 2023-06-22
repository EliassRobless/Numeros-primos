# Numeros-primos
El siguiente programa esta hecho en lenguaje C. Tiene el proposito de determinar si el numero ingresado por el usuario cumple con las condiciones para ser un numero primo.
Sea p ∈ Z , 1 ≠ p ≠ -1
Por definicion decimos que p es primo si sus unicos divisores son p, -p y las unidades.

Para ejecutar el programa es necesario utilizar cualquier compilador de lenguaje C (online o aplicacion) como lo son Dev C++, Compiler Code C, etc.

Algunos ejemplos de valores de entrada y salida esperados son:

1.- 70 = No es un numero primo

2.- 13 = Es un numero primo

3.- 6 = No es un numero primo 

Integrantes Equipo 5: Robles Ramirez Angel Elias, Bazan Tehuitzil Oscar Damian, Ortiz Martinez Isai Eliezer, Santiago Guerrero Isaac Alejandro, Solares Velasco Arturo.

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




