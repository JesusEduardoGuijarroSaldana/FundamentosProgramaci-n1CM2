/* 
 * File:   40CuadernilloSumaraVariableConPunteros.c
 * Author: guija
 *
 * Created on 4 de enero de 2021, 05:43 PM
 */

#include <stdio.h>
#include <stdlib.h>

// Definición del prototipo de función.
int funcion(int v);
int funpunteros(int *v);

int main(int argc, char** argv) {
    // Variables declaradas e inicializadas.
    int n = 100;
    printf("\nAntes de ejecutarse la función con punteros, n = %d",n);
    funpunteros(&n);
    printf("\nDespués de ejecutarse la función con punteros, n = %d", n);
    
    printf("\n\tFunción sin punteros.");
    printf("\nValor de n antes de ejecutarse: %d", n);
    funcion(n);
    printf("\nValor de n después de ejecutarse: %d", n);
    
    return (EXIT_SUCCESS);
}
// Función ya está implementada.
int funcion(int v){
    v=v+5;
    return v; 
}
int funpunteros(int *v){
*v=*v+5;
return *v;
}