/* 
 * File:   Mayor de 4 números.c
 * Author: guija
 *
 * Created on 9 de noviembre de 2020, 12:27 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num4 = 69;
    int num5 = 11;
    int num6 = 200;
    int num7 = 5;
    
if (num4 > num5 && num4 > num6 && num4 > num7){
        printf ("El número mayor de los 4 es: " "%d", num4);
    }
    else if (num5 > num4 && num5 > num6 && num5 > num7){
        printf ("El número mayor de los 4 es: " "%d", num5);     
    }
    else if (num6 > num4 && num6 > num5 && num6 > num7){
        printf ("El número mayor de los 4 es: " "%d", num6);
    }
    else if (num7 > num4 && num7 > num5 && num7 > num6){
        printf ("El número mayor de los 4 es: " "%d", num7);
    }
    else if (num4 == num5 && num4 == num6 && num4 == num7){
        printf ("Todos los números son iguales");
    } 

    return (EXIT_SUCCESS);
}

