/* 
 * File:   23CuadernilloMultiplodeCualquierNum.c
 * Author: guija
 *
 * Created on 26 de diciembre de 2020, 07:48 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    /*Programa que imprime todos los múltiplos de n, que se encuentran
    entre 1 y 1,000.*/
    // Variables inicializadas y declaradas.
    int numero = 0;
    int multiplode = 0;
    
    printf ("\n\t Programa que imprime todos los múltiplos de n, que se "
            "encuentran entre 1 y 1,000.");
    
    /* Le pedimos al usuario que digite el número al cuál quiere obtener 
    sus múltiplos, y se guarda con ayuda de un scanf en "multiplode"*/
    printf ("\n\nIngrese el número del cuál quiere obtener sus múltiplos: ");
    scanf ("%d", &multiplode);
    
    /* Con ayuda de un while delimitamos hasta qué número se obtienen múltiplos
    y con ayuda de un if evaluamos si el resto de la división es 0 entre un 
    número entre 1 y 100 y el número agregado por el usuario, si es 0 es 
    múltiplo y se imprime, en caso contrario no se imprime y continua hasta 
    llegar 1000*/
    while (numero <= 1000){
        if (numero % multiplode == 0){
            printf ("\n%d",numero);
        }
        numero++;
        
    }
    return (EXIT_SUCCESS);
}

