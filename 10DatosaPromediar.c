/* 
 * File:   10DatosaPromediar.c
 * Author: guija
 *
 * Created on 23 de noviembre de 2020, 12:31 PM
 */

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    
    int x;
    
    float total = 0;
    float promedio = 0;
    float nelem = 0;
    
    printf ("¿Cuántas cantidades desea promediar?");
    scanf("%f",&nelem);
    
    float cantidades[x];
    
    for (x=0; x<nelem ; x=x+1){
        printf("Ingresa las cantidades %d: ", x+1);
        scanf("%f", &cantidades[x]);
        total += cantidades[x];
        promedio = total / nelem;
        printf ("\n");
    }
    
    printf ("El promedio de las cantidades es: %.2f\n", promedio);
    

    return (EXIT_SUCCESS);
}

