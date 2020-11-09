/* 
 * File:   Mayor de 3 números.c
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
    int num1 = 50;
    int num2 = 89;
    int num3 =7;
    
if (num1 > num2 && num1 >num3 ){
        printf ("El número mayor de los 3 es: " "%d", num1);
    } 
    else if (num2 > num1 && num2 > num3){
        printf ("El número mayor de los 3 es: " "%d", num2);
    }
    else if (num3 > num1 && num3 > num2){
        printf ("El número mayor de los 3 es: " "%d", num3);
    }
    else if (num1 == num2 && num1 == num3){
        printf ("Todos los números son iguales");
    }

    return (EXIT_SUCCESS);
}

