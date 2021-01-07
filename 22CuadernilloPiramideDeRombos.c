/* 
 * File:   22CuadernilloPiramideDeRombos.c
 * Author: guija
 *
 * Created on 26 de diciembre de 2020, 07:26 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    /*Programa que pide un número entero positivo y imprime una pirámide de 
     * rombos*/
    // Variables inicializadas y declaradas.
    int numero = 0;
    int contador = 0;
    int asteriscos = 0;
    
    printf ("\n\t Programa que pide un número entero positivo y imprime "
            "una pirámide de rombos.");
    
    /* Pedimos al usuario que digite la cantidad de escalones y por medio de un
     scanf guardamos la cantidad en "numero".*/
    printf ("\nIngresa la cantidad de escalones para tu pirámide: \n");
    scanf ("%d", &numero);
    
    /* Utilizando la variable "contador" para como su nombre lo dice hacer de 
    * contador, con ayuda de dos ciclos for anidados realizamos la impresión
    * de la piramide */
    for (contador=1; contador <= numero; contador++){
        for (asteriscos=1; asteriscos <= contador; asteriscos++){
            printf ("*");
        }    
        printf("\n");
    }

    return (EXIT_SUCCESS);
}

