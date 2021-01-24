/* 
 * File:   48TorresHanoiRecursividad.c
 * Author: guija
 *
 * Created on 24 de enero de 2021, 02:03 PM
 */

#include <stdio.h>
#include <stdlib.h>

int ArosHanoi(int, char, char, char);

int main(int argc, char** argv) {
    int elementos, movimiento;
    printf ("\nIngresa el número de aros:");
    scanf("%d", &elementos);
    movimiento = ArosHanoi(elementos, 'A', 'B', 'C');
    printf ("\nNúmero de movimientos total: %d", movimiento);
    
    return (EXIT_SUCCESS);
}

int ArosHanoi(int elementos, char a, char b, char c){
    int movimiento;
    if (elementos > 0){
        ArosHanoi(elementos -1, a, b, c);
        printf ("\nSe ha movido el aro %d de la barra %c hasta la %c.", elementos, a, c);
        movimiento=movimiento+1;
        ArosHanoi(elementos -1, b, a, c);
        return movimiento;
    }
}