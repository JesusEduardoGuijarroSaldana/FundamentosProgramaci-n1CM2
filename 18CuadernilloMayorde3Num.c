/* 
 * File:   18CuadernilloMayorde3Num.c
 * Author: guija
 *
 * Created on 18 de diciembre de 2020, 03:47 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
//Programa que evalua el mayor de 3 números.
    // Variables inicializadas y declaradas.
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    
    printf ("\n\tPrograma que evalua el mayor de 3 números.");
    
    /* Pedimos los números a evaluar y los guardamos con medio de scanf en 
    nuestras variables.*/ 
    printf ("\nIngrese el primer número a evaluar: ");
    scanf ("%d", &num1);
    printf ("\nIngrese el segundo número a evaluar: ");
    scanf ("%d", &num2);
    printf ("\nIngrese el tercer número a evaluar: ");
    scanf ("%d", &num3);
    
    /* Evaluamos con ayuda de la estructura if y en caso caso de que se cumpla 
    alguna condición se imprime el resultado. */    
    
    if (num1 > num2 && num1 >num3 ){
        printf ("\n\nEl número mayor de los 3 es: " "%d", num1);
    } 
    else if (num2 > num1 && num2 > num3){
        printf ("\n\nEl número mayor de los 3 es: " "%d", num2);
    }
    else if (num3 > num1 && num3 > num2){
        printf ("\n\nEl número mayor de los 3 es: " "%d", num3);
    }
    else if (num1 == num2 && num1 == num3){
        printf ("\n\nTodos los números son iguales");
    }
    
    return (EXIT_SUCCESS);
}

