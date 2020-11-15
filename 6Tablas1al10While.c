/* 
 * File:   Tablas1al10While.c
 * Author: guija
 *
 * Created on 11 de noviembre de 2020, 07:43 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int x = 1;
    int y = 1;
    while (x < 11){
        printf ("Tabla del %d\n", x);
        while (y < 11){
            printf ("%d X %d = %d\n", x, y, x*y);
            y = y +1;
        }
        x = x+1;
        y = 1;
    }

      
    return (EXIT_SUCCESS);
}

