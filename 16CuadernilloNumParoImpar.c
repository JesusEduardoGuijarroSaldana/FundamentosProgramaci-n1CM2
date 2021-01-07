/* 
 * File:   16CuadernilloNumParoImpar.c
 * Author: guija
 *
 * Created on 18 de diciembre de 2020, 03:12 PM
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
// Programa que determina si un número es par o impar.
    // Variables inicializadas y declaradas.
    int x = 0;
    
    printf ("\n\t Programa que determina si un número es par o impar.");
    
    // Pedir el número a evaluar.
    printf ("\n\n Ingrese el número a evaluar: ");
    scanf("%d", &x);
    
    // Evaluación e impresión de lo que se determino con ayuda de la estructura if.
    if (x == 0){
        printf ("\n\nPor favor ingrese un número diferente de cero.");
    }
    else if (x%2 == 0){
        printf ("\n\nEl número %d es par.",x);
    }    
    else { 
            printf ("\n\nEl número %d es impar.",x);
    }
        
    return (EXIT_SUCCESS);
}

