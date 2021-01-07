/* 
 * File:   24CuadernilloTodoslosNumEntredosNum.c
 * Author: guija
 *
 * Created on 1 de enero de 2021, 02:16 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    /*Programa que pida dos número al usuario e imprima todos los números 
    comprendidos entre esos dos números.*/
    // Variables inicializadas y declaradas.
    int x = 0;
    int y = 0;
    int i = 0;
    
    printf ("\n\tPrograma que muestra todos los número que hay entre dos "
            "números.");
    printf ("\n\nNOTA: El primer número tiene que ser menor al segundo.");
    
    /*Pedimos al usuario que digite los dos números que delimitaran los números
    que se imprimiran, se guardan los números en sus respectivas variables. */
    printf ("\n\nIngrese el primer número: ");
    scanf("%d", &x);
    printf ("\nIngrese el segundo número: ");
    scanf("%d", &y);    
    
    /* Con ayuda de un if evitamos que se ingresen los números de forma 
    incorrecta.*/
    if (x > y){
        printf("\nPor favor ingrese ambos números de forma correcta (como "
                "menciona en la NOTA).");
    }
    /* Con ayuda de un ciclo for, realizamos la impresión de los números, 
    delimitando que se imprima el primer  y segundo número agregado.*/
    for (i= x+1; i < y; i++){
        printf ("%d\n",i);
    }
    
    return (EXIT_SUCCESS);
}

