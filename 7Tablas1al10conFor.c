/* 
 * File:   7Tablas1al10conFor.c
 * Author: guija
 *
 * Created on 15 de noviembre de 2020, 01:45 PM
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    int x;
    int y;
    
    for (x=1;x<11;x = x+1){
        printf ("Tabla del %d\n", x);
        
        for (y=1;y<11;y = y +1){
            printf ("%d X %d = %d\n", x, y, x*y);
        
        }
    
    y = 1;
    }

    return (EXIT_SUCCESS);
}

