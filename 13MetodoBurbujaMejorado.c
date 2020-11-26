/* 
 * File:   13MetodoBurbujaMejorado.c
 * Author: guija
 *
 * Created on 24 de noviembre de 2020, 06:34 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
        
    int x, y, cantidad, aux;
    int ciclos=0, bandera=1;
    
    printf("Programa que implementa el método de ordenamiento burbuja.  ");
    printf("\n¿Cuántos números desea evaluar?");
    scanf("%d", &cantidad);
    
    int num[cantidad];
    
    for (y=0; y<cantidad; y=y+1){
        printf("Ingrese los valores para el arreglo en la posición [%i]: ",y);
        scanf("%d", &num[y]);
    }

    for(x=0; x<cantidad && bandera==1; x=x+1){
        bandera=0;
        for(y=0; y<cantidad; y=y+1){
            if(num[y]>num[y+1]){
                bandera=1;
                aux=num[y];
                num[y]=num[y+1];
                num[y+1]=aux;
            }
        }
        ciclos=ciclos+1;
    }
    
    printf("\nOrden ascendente, me tomo %d ciclos",ciclos);
    for(x=0; x<cantidad; x=x+1){
        printf ("\nOrdenado %d ", num[x]);
    }

    printf("\nOrden descendente, me tomo %d ciclos",ciclos);
    cantidad=cantidad-1;
    for(x=cantidad; x>=0; x=x-1){
        printf ("\nOrdenado %d ", num[x]);
    }
    

    return (EXIT_SUCCESS);
}

