/* 
 * File:   9Arreglos.c
 * Author: guija
 *
 * Created on 23 de noviembre de 2020, 10:39 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int i;
    int j;
    int arreglo[i];
   
    printf ("Ingresa el número de arreglos:");
    scanf("%d",&i);
    for(j=0;j<i;j=j+1){
        printf ("Ingresa los números del arreglo: \n");
        scanf("%d",&arreglo[i]);
        printf ("Posición [%d] el valor que introduciste fue: %d\n", j, arreglo[i]);
    }
    

    return (EXIT_SUCCESS);
}

