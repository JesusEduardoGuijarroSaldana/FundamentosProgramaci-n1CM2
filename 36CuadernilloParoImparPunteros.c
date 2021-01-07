/* 
 * File:   36CuadernilloParoImparPunteros.c
 * Author: guija
 *
 * Created on 3 de enero de 2021, 08:39 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    // Pograma que determina si un número es par o impar con punteros.
    // Variables declaradaas y inicializadas. 
    int numero = 0;
    int *direcnum;
    // Le pedimos al usuario agregar un número.
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    
    // Guardamos la dirección de memoria.
    direcnum = &numero;
    //Evaluamos es es par o impar con su residuo divido en 2.
    if (*direcnum%2==0){
        printf("El número %d es par.", *direcnum);
        printf("\nSe encuentra en la posición: %p", direcnum);
    }
    else{
        printf("El número %d es impar", *direcnum);
        printf("\nSe encuentra en la posición: %p.", direcnum);    
    }
    return (EXIT_SUCCESS);
}

