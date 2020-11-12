/* 
 * File:   5SerieFibonacciFunciónWhile.c
 * Author: guija
 *
 * Created on 9 de noviembre de 2020, 01:05 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int A = 0;
    int B = 1;
    int N = 50; 
//N es el límite de la serie, el número que no debe de pasar el último digito de la serie.

    while (A <= N && B <= N){
        printf ("\n""%d", A);
        printf ("\n""%d", B);
        A = A+B;
        B = B+A;
    }
    return (EXIT_SUCCESS);
}

