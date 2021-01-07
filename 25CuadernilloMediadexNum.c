/* 
 * File:   25CuadernilloMediadexNum.c
 * Author: guija
 *
 * Created on 1 de enero de 2021, 02:46 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    //Programa que calcule e imprima la media de x números.
    // Variables inicializadas y declaradas.
    int x = 0;
    int y = 0;
    int i = 1;
    float suma = 0;
    
    printf ("\nPrograma que calcula la media de x números.");
    //Le pedimos al usuario que digite la cantidad de números a evaluar.
    printf ("\n\n¿Cuántos números desea evaluar?");
    scanf("%d",&x);
    
    /* Con ayuda de un while le pedimos la cantidad exacta de números que el 
    usuario quiere evaluar y se van guardando y sumando conforme se ejecuta.*/
    while (i <= x){
        printf ("Ingresa el %d número: ", i);
        scanf ("%d",&y);
        i++;
        suma += y;
    }
    // Calculamos la media y la imprimimos.
    suma = suma / x;
    printf ("La media de los %d número agregados es: %.2f", x, suma);
    
    return (EXIT_SUCCESS);
}

