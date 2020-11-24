/* 
 * File:   12MetodoBurbuja.c
 * Author: guija
 *
 * Created on 23 de noviembre de 2020, 05:39 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
   
    int x, y, cantidad, aux;
    
    
    printf("\n¿Cuántos números desea evaluar?");
    scanf("%i", &cantidad);
    
    int num[cantidad];
    
    for (y=0; y<cantidad; y=y+1){
        printf("Digite el valor para arreglo [%i]: ",y);
        scanf("%i", &num[y]);
    }

    for(x=0; x<cantidad; x=x+1){
        for(y=0; y<cantidad; y=y+1){
            if(num[y]>num[y+1]){
                aux=num[y];
                num[y]=num[y+1];
                num[y+1]=aux;
            }
        }
    }
    
    
    for(x=0; x<cantidad; x=x+1){
        printf ("\nOrdenado %i ", num[x]);
    }
    
    return (EXIT_SUCCESS);
}

