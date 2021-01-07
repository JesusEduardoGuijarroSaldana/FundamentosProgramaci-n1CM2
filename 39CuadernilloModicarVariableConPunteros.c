/* 
 * File:   39CuadernilloModicarVariableConPunteros.c
 * Author: guija
 *
 * Created on 4 de enero de 2021, 05:28 PM
 */

#include <stdio.h>
#include <stdlib.h>
// Definición del prototipo de función.
void modifica(int *y);
int main(int argc, char** argv) {
    // Variables declaradas e inicializadas.
    int x = 9;
    printf("\n\tAntes de llamar a la función: %d",x);
    modifica(&x);
    printf("\nDespués de llamar a la función, utilizando "
            "además punteros: %d\n",x);
    
    return (EXIT_SUCCESS);
}
// Función ya está implementada.
void modifica(int *y){
*y=5;
}
