/* 
 * File:   17CuadernilloNumPosNegoCero.c
 * Author: guija
 *
 * Created on 18 de diciembre de 2020, 03:31 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
// Programa que determina si un número es positivo, negativo o cero.
    // Variables inicializadas y declaradas.
    int x = 0;
    
    printf ("\n\tPrograma que determina si un número es positivo, negativo o cero.");
    
    // Pedir el número a evaluar.
    printf ("\n\nIngrese el número a evaluar: ");
    scanf ("%d", &x);
    
    // Evaluación e impresión del resultado determinado por nuestra estructura if.
    if ( x == 0){
        printf ("\n\nEl número %d, anteriormente ingresado es 0.", x);
    }
    else if (x > 0){
        printf ("\n\nEl número %d, anteriormente ingresado es positivo.", x);
    }
    else if (x < 0){
        printf ("\n\nEl número %d, anteriormente ingresado es negativo.", x);
    }
    
    return (EXIT_SUCCESS);
}

