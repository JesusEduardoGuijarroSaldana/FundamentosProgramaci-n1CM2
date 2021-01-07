/* 
 * File:   38CuadernilloArregloNumParesDirecMemor.c
 * Author: guija
 *
 * Created on 3 de enero de 2021, 09:26 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    /* Programa que evalua 10 números de un arreglo, determina si son pares y 
    además imprime su dirrección de memoria*/
    // Variables declaradaas y inicializadas. 
    int numeros[10];
    int *direcnum;
    int i=0;
    // Le pedimos al usuario agregar los 10 números.
    for(i=0; i<10;i++){
        printf("Ingrese un número [%d]:", i);
        scanf("%d", &numeros[i]);
    }
    // Guardamos la dirección de memoria.
    direcnum=numeros;
    for(i=0; i<10;i++){
        if(*direcnum%2==0){
            printf("\n\n\tEl número %d es par.", *direcnum);
            printf("\nSe encuentra en la posición: %p", direcnum);
        }
        direcnum++;
    }
    return (EXIT_SUCCESS);
}

