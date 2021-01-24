/* 
 * File:   47FactorialRecursividad.c
 * Author: guija
 *
 * Created on 24 de enero de 2021, 01:37 PM
 */

#include <stdio.h>
#include <stdlib.h>

int factorial(int);

int main(int argc, char** argv) {
    
    int numero=0, resultado=0;
    
    printf ("Introduce un número a evaluar: ");
    scanf("%d",&numero);
    resultado = factorial(numero);
    
    printf ("\nEl factorial de %d es: %d", numero, resultado);
 
    return (EXIT_SUCCESS);
}

int factorial(int numero){

    if (numero < 1){
        return 0;
    }else if(numero == 1){
        return 1;
    }
    else{
        return (numero * factorial(numero - 1));
    }
}