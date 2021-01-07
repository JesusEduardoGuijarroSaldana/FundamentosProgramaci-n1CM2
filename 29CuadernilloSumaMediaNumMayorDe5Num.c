/* 
 * File:   29Cuadernillo.c
 * Author: guija
 *
 * Created on 2 de enero de 2021, 03:25 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    // Programa que calcula la suma, media y el mayor de 5 números.
    // Variables declaradas e inicializadas.
    int numeros [5];
    int opcion = 0;
    int suma = 0;
    float media = 0;
    int maximo = 0;
    int i = 0;
    
    printf ("\n\tPrograma que calcula la suma, media y el mayor de 5 números.\n");  
    // Ingreso de cantidades.
    for (i=0; i < 5; i++){
        printf ("\nIntroduce el elemento numero %d: ", i+1);
        scanf("%d", &numeros[i]);
    }
    // Menú.
    printf ("\n----Opciones----\n");
    printf ("\n1. Sumar números.");
    printf ("\n2. Calcular la media.");
    printf ("\n3. Valor máximo.");
    // Elegir opción.
    printf ("\n\tEliga una de las opciones existentes o una no existente "
            "para salir.");
    scanf("%d", &opcion);
    // En caso de elegia una opción no existente.
    if (opcion != 1 && opcion != 2 && opcion != 3){
        printf ("\n\nEligió una opción inexistente o decidió salir.");

    }
    //Imprementación menú
        switch (opcion){
        case 1:{// Suma números.
            for (i=0; i < 5; i++){
                suma = suma + numeros[i];
            }
            printf("\nLa suma es: %d", suma);
            break;
        }

        case 2:{// Media.
            for (i=0; i < 5; i++){
                suma = suma + numeros[i];   
            }
            media = suma / 10;
            printf("\nLa media es: %.2f", media);
            break;
        }
        case 3:{// Valor máximo.
            maximo = numeros[0];
            for (i=1; i < 5; i++){
                if (numeros[i]>maximo){
                    maximo = numeros[i]; 
                }
            }
            printf("\nEl valor máximo es: %d", maximo);
            break;
        }
    }
    return (EXIT_SUCCESS);
}

