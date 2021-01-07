/* 
 * File:   30CuadernilloIntercambiodelValordeDosVariables.c
 * Author: guija
 *
 * Created on 2 de enero de 2021, 05:29 PM
 */

#include <stdio.h>
#include <stdlib.h>

// Definición del prototipo de función.
void intercambio (int , int);

int main(int argc, char** argv) {
    
    // Programa que intercambia el valor de 2 variables usando una función.
    // Variables inicializadas y declaradas.
    int a = 0;
    int b = 0;
    
    /*Le pedimos al usuario que digite el valor de a y b, se guarda en su 
    respectiva variable.*/
    printf ("Programa que intercambia el valor de 2 variables usando una función.");
    printf ("\nIngrese un valor para a: \n");
    scanf ("%d", &a);
    printf ("\nIngrese un valor para b: \n");
    scanf ("%d", &b);
    printf ("\n\nValores sin intercambiar: %d, %d.", a, b);
    
    //Llamamos a nuestra función.
    intercambio (a, b);
    
    return (EXIT_SUCCESS);
}
// Función ya está implementada.
void intercambio (int a, int b){
    int aux; // con aux nos apoyamos para hacer el intercambio de los valores.
    aux = a;
    a = b;
    b = aux;
    printf ("\n\nValores intercambiados: %d, %d.", a, b);
}
