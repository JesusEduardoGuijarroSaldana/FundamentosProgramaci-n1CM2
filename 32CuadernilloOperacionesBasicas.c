/* 
 * File:   32CuadernilloOperacionesBasicas.c
 * Author: guija
 *
 * Created on 2 de enero de 2021, 05:56 PM
 */

#include <stdio.h>
#include <stdlib.h>

// Definición del prototipo de función.
void suma (int, int);
void resta (int, int);
void multip (int, int);
void division (int, int);

int main(int argc, char** argv) {
// Programa con menú de operaciones básicas.
    // Variables inicializadas y declaradas.
    float a = 0;
    float b = 0;
    int opcion = 0;
    
    printf ("\nPrograma con menú de operaciones básicas.");
    printf ("\n\n----Menú de opciones----\n");
    // Opciones.
    printf ("\n1. Suma.");
    printf ("\n2. Resta.");
    printf ("\n3. Multiplicación.");
    printf ("\n4. División.");
    // Ingreso de cantidades.
    printf ("\nIngrese el primer número: ");
    scanf ("%f", &a);
    printf ("\nIngrese el segundo número: ");
    scanf ("%f", &b);
    // Elegir opción.
    printf ("\n\tEliga una de las opciones existentes o una no existente "
            "para salir:");
    scanf ("%d", &opcion);
    // En caso de elegia una opción no existente.
    if (opcion != 1 && opcion != 2 && opcion != 3 && opcion != 4){
        printf ("\n\nEligió una opción inexistente o decidió salir.");

    }
    //Imprementación menú 
    switch (opcion){
        case 1:{// Suma.
            suma (a, b); //Llamamos a nuestra función.
            break;
        }        
        case 2:{// Resta.
            resta (a, b); //Llamamos a nuestra función.
            break;
        }
        case 3:{// Multiplicación.
            multip (a, b); //Llamamos a nuestra función.
            break;
        }
        case 4:{// División.
            division (a, b); //Llamamos a nuestra función.
            break;
        }
    }
    return (EXIT_SUCCESS);   
}
// Función ya está implementada.
void suma (int a, int b){
    float res = 0; 
    res = a+b; //Operaciones.
    printf ("\nEl resultado de la suma es: %.2f", res);
}
void resta (int a, int b){
    float res = 0; 
    res = a-b; //Operaciones.
    printf ("\nEl resultado de la resta es: %.2f", res);
}
void multip (int a, int b){
    float res = 0; 
    res = a*b; //Operaciones.
    printf ("\nEl resultado de la multiplicación es: %.2f", res);
}
void division (int a, int b){
    float res = 0; 
    res = a/b; //Operaciones.
    printf ("\nEl resultado de la división es: %.2f", res);
}