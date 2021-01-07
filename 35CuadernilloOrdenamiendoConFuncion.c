/* 
 * File:   35CuadernilloOrdenamiendoConFuncion.c
 * Author: guija
 *
 * Created on 3 de enero de 2021, 06:07 PM
 */

#include <stdio.h>
#include <stdlib.h>

// Definición del prototipo de función.
void ordenar (int a[]);
void imprimir (int x[]);

int main(int argc, char** argv) {
    /*Programa con un arreglo de 10 números, que los imprime en orden descendente
    con una función.*/
    // Variables declaradaas y inicializadas. 
    int v[10]={4,2,3,1,7,8,6,5,9,0};
    ordenar(v);//Llamamos a nuestra función.
    imprimir(v);//Llamamos a nuestra función.

    return (EXIT_SUCCESS);
}
// Función ya está implementada.
void ordenar (int a []){//Función con método burbuja.
    int i, j, aux; 
    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            if(a[i] > a [j]){
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }
}
void imprimir (int x []){//Función para imprimir los números.
    int i;
    for(i=0; i<10; i++){
        printf ("%d, ",x[i]);
    }
    printf("\n\n");
}