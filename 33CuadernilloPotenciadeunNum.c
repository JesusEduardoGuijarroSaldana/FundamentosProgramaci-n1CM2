/* 
 * File:   33CuadernilloPotenciadeunNum.c
 * Author: guija
 *
 * Created on 3 de enero de 2021, 03:24 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Definición del prototipo de función.
void potencia (int, int, float);

int main(int argc, char** argv) {
    //Programa que calcula la n potencia de n número.
    // Variables declaradas e inicializadas.
    int base = 0;
    int exponente = 0;
    float resultado = 0;
    
    printf("\n  Programa que calcula la n potencia de n número.");
    potencia (base,exponente,resultado); //Llamamos a nuestra función.
    return (EXIT_SUCCESS);
}

// Función ya está implementada.
void potencia (int base, int exponente, float resultado){
    //Ingreso de datos.
    printf ("\n\nDigite el valor de la base: ");
    scanf("%d", &base);
    printf ("\n\nDigite el valor del exponente: ");
    scanf("%d", &exponente);
    resultado = pow(base, exponente); /* Utilizamos la función 
                                        pow para el calculo.*/
    printf ("\nEl resultado de %d elevado a la %d es: %.2f"
            , base, exponente, resultado); // Impresión de resultado.
}