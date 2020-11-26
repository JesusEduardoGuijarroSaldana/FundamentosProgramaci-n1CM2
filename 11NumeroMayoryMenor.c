/* 
 * File:   11NumeroMayoryMenor.c
 * Author: guija
 *
 * Created on 23 de noviembre de 2020, 02:16 PM
 */

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    
    int x;
    float arreglo[x];
    float totalnum = 0; 
    int mayor;
    int menor;
    
    printf ("Programa que determina el número menor y mayor\n\n");
    
    printf ("¿Cuántos números desea evaluar?\n");
    scanf("%f",&totalnum);
    
    for (x=0; x < totalnum; x=x+1){
        printf("Número %d: ", x+1);
        scanf("%f", &arreglo[x]);
    }
    mayor=arreglo[0];
    menor=mayor;
    
    for (x=1 ;x< totalnum ;x=x+1){
        if(arreglo[x]>mayor){
            mayor=arreglo[x];
        }
        if(arreglo[x]<menor){
            menor=arreglo[x];
        }
    }

    printf("\nEl número %d es el mayor de todos.", mayor); 
    printf("\nEl número %d es el menor de todos.", menor);
    
    return (EXIT_SUCCESS);
}

