/* 
 * File:   19CuadernilloMillToKm&KmToMill.c
 * Author: guija
 *
 * Created on 18 de diciembre de 2020, 04:04 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
// Programa de conversiones: Millas a Km y Km a Millas.  
    // Variables inicializadas y declaradas.
    int opcion = 0;
    float km = 0;
    float millas = 0;
    
    printf ("\n\tPrograma de conversiones: Millas a Km y Km a Millas.");
    
    // Opciones de conversión.
    printf ("\n1. Millas a Km.");
    printf ("\n2. Km a Millas.");
    
    // Elegir una de las opciones de conversión.
    printf("\n\nElija una de las opciones: ");
    scanf("%d", &opcion);
    
    if (opcion != 1 && opcion != 2){
        printf ("\n\nPor favor ingrese una opción existente.");
    }
    
    /* Conversión de Millas a Km, ingreso de millas, operaciones y impresión de 
    la conversión.*/
    if (opcion == 1){
        printf ("Ingrese las Millas que quiere convertir a Km:");
        scanf("%f", &millas);
        if (millas < 0){
            printf ("Por favor ingrese un número positivo.");
        }
        else { 
        km = millas*1.609;
        printf("\n %.2f Millas son: %.2f kilómetros.", millas, km);
        }  
    }  
    /* Conversión de Km a Millas, ingreso de km, operaciones y impresión de 
    la conversión.*/
    if (opcion == 2){
        printf ("Ingrese los Kilómetros que quiere convertir a Millas:");
        scanf("%f", &km);
        if (km < 0){
            printf ("Por favor ingrese un número positivo.");
        }
        else {
            millas = km/1.609;
            printf("\n %.2f Kilómetros son: %.2f Millas.", km, millas);
        }
    
    }
    return (EXIT_SUCCESS);
}

