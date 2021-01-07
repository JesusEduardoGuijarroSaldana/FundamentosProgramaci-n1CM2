/* 
 * File:   21CuadernilloMayorDe.c
 * Author: guija
 *
 * Created on 26 de diciembre de 2020, 07:02 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    /*Programa que pide "n" números hasta que se introduce un 0, 
    luego los evalua e imprime el mayor de esos números.*/
    
    // Variables inicializadas y declaradas.
    int numero = 0;
    int nummayor = -999;
    printf("Programa que pide n números hasta que se introduce un 0, "
            "\nluego los evalua e imprime el mayor de esos números.");
    
    /* Utilizamos un ciclo do, para que al menos se realice una vez el ciclo.
     Pedimos al usuario que introduzca el númeroa a evaluar. Evaluamos con un if
     y vamos guardando el número mayor en "nummayor".*/
    do{
        printf ("\t\nIntroduzca un número: ");
        scanf("%d", &numero);
        if(numero > nummayor){
            nummayor = numero;  
        }
    }while (numero != 0);
    
    /*Luego de agregar un 0 el programa se detiene y se imprime el resultado 
    final.*/
    printf ("\n\nEl número mayor de los que ingreso es: %d", nummayor);

    return (EXIT_SUCCESS);
}

