/* 
 * File:   28Cuadernillo.c
 * Author: guija
 *
 * Created on 2 de enero de 2021, 02:20 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    // Programa que busca un número en un arreglo e imprime en dónde lo encontró.
    //Variables y arreglo declaradas e inicializadas.
    int arreglo [5], i=0, j=0, temp=0, buscar=0, bandera=0;
    
    printf("\n\tPrograma que busca un número en un arreglo de 5 números e "
            "imprime en dónde lo encontró.");
    // Con ayuda de un for y una variable auxiliar guardamos los 5 números.
    for (i = 0; i < 5; i++){
        printf ("\nIngresa el elemento numero %d\n", i+1);
        scanf("%d", &temp);
        arreglo[i] = temp;
    }
    
    /* Ciclamos con ayuda de un for el buscar el número guardado en el arreglo
    y imprimos si fue encontrado y en donde, o si no fue encontrado.*/
    printf ("\nIngresa el número que quieres buscar: ");
    scanf("%d", &buscar);
    bandera = 0;
    for(j=0; j<5; j++){
        if (arreglo[j]==buscar){
                printf ("\nEl número fue encontrado en la posición: %d", j+1);
                bandera = 1;
            }
        }
        if (bandera==0){
            printf ("\nNo se encontró el número buscado.");
        }

    return (EXIT_SUCCESS);
}

