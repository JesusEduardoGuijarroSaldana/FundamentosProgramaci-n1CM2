/* 
 * File:   26CuadernilloArreglo10Num.c
 * Author: guija
 *
 * Created on 2 de enero de 2021, 01:29 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    /*Programa que te pide 10 números para almacenarlos en un arreglo, 
     * luego los imprime.*/
    /* Declaramos e inicializamos nuestro arreglo de 10 elementos y una variable
    para usarla como contador. */
    int arreglo[10];
    int i = 0;
    
    printf ("\n\tPrograma que te pide 10 números para almacenarlos en un arreglo,"
            " luego los imprime.");
    
    /* Con ayuda de un for vamos pidiendo los números y vamos guardandolos en 
    el arreglo*/
    for (i = 0; i < 10; i++){
        printf ("\nIngresa el valor para la posición %d: ", i);
        scanf ("%d,",&arreglo[i]);
    }
    // Imprimimos luego los valores agregados con ayuda de un for.
    printf ("\nLos valores que agregaste en el arreglo son: \n");
    for (i = 0; i < 10; i++){
        printf ("%d, ", arreglo[i]);
    }
    return (EXIT_SUCCESS);
}

