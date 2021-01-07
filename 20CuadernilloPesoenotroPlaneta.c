/* 
 * File:   20CuadernilloPesoenotroPlaneta.c
 * Author: guija
 *
 * Created on 18 de diciembre de 2020, 05:55 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
// Programa que transforma el peso en la tierra, al peso en otro planeta.
    // Variables inicializadas y declaradas.
    int opcion = 0;
    float pesoentierra = 0;
    float pesootroplaneta = 0;
    
    printf ("\n\tPrograma que transforma el peso en la tierra, al peso en otro planeta.");
    
    // Opciones de conversión.
    printf ("\n\n1. Mercurio.");
    printf ("\n2. Venus.");
    printf ("\n3. Marte.");
    
    // Pedir el peso en la tierra.
    printf ("\nIngresa tu peso en la tierra: ");
    scanf ("%f", &pesoentierra);
    
    // Elegir una de las opciones de conversión.
    printf ("\nIngresa una de las opciones (1, 2, 3): ");
    scanf("%d", &opcion);
    
    // En caso de elegir una opción no existente.
    if (opcion != 1 && opcion != 2 && opcion != 3){
        printf ("\n\nPor favor ingrese una opción existente.");
    }
    
    // Verificar en qué planeta fue, operaciones e impresión del peso convertido.
    switch (opcion){
        // Peso en Mercurio.
        case 1:{
            pesootroplaneta = pesoentierra * 0.38;
            printf("\nTu peso en Mercurio es: %.2f", pesootroplaneta);
            break;
        }
        // Peso en Venus.
        case 2:{ 
            pesootroplaneta = pesoentierra * 0.91;
            printf("\nTu peso en Venus es: %.2f", pesootroplaneta);
            break;
        }
        // Peso en Marte.
        case 3:{
            pesootroplaneta = pesoentierra * 0.38;
            printf("\nTu peso en Marte es: %.2f", pesootroplaneta);
            break;
        }
    }

    return (EXIT_SUCCESS);
}

