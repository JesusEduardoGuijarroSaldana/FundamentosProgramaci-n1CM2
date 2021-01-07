/* 
 * File:   37CuadernilloSumaconPunteros.c
 * Author: guija
 *
 * Created on 3 de enero de 2021, 08:56 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    // Programa para probar los punteros realizando un suma.
    // Variables declaradaas y inicializadas. 
    int a = 0;
    int b = 0;
    int suma = 0;
    int *p1,*p2,*p3;
    // Le pedimos al usuario agregar dos números.
    printf("Ingrese el valor de a: ");
    scanf("%d", &a);
    printf("Ingrese el valor de b: ");
    scanf("%d", &b);
    suma=a+b;
    printf("\nEl resultado de la suma es: %d", suma);
    
    p1=&a;
    p2=&b;
    p3=&suma;
    
    printf("\nDirección de memoria de a: %p", &a);
    printf("\nDirección de memoria de b: %p", &b);
    printf("\nDirección de memoria de suma: %p", &suma);
    
    printf("\np1 = %p", p1);
    printf("\np2 = %p", p2);
    printf("\np3 = %p", p3);
    
    printf("\n*p1 + *p2 = %d", *p1+*p2);
    printf("\n*p3 = %d", *p3);
    return (EXIT_SUCCESS);
}

