/* 
 * File:   main.c
 * Author: guija
 *
 * Created on 2 de noviembre de 2020, 02:25 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Para el mayor de 3 números*/
    int num1 = 50;
    int num2 = 89;
    int num3 =7;
    /*Para el mayor de 4 números*/
    
    int num4 = 69;
    int num5 = 11;
    int num6 = 200;
    int num7 = 5;
  
   
    /*Para el mayot de 3 números*/
    
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
  
    /*Para el mayor de 4 números*/
    
    if (num4 > num5 && num4 > num6 && num4 > num7){
        printf ("\nEl número mayor de los 4 es: " "%d", num4);
    }
    else if (num5 > num4 && num5 > num6 && num5 > num7){
        printf ("\nEl número mayor de los 4 es: " "%d", num5);     
    }
    else if (num6 > num4 && num6 > num5 && num6 > num7){
        printf ("\nEl número mayor de los 4 es: " "%d", num6);
    }
    else if (num7 > num4 && num7 > num5 && num7 > num6){
        printf ("\nEl número mayor de los 4 es: " "%d", num7);
    }
    else if (num4 == num5 && num4 == num6 && num4 == num7){
        printf ("\nTodos los números son iguales");
    }        
    return (EXIT_SUCCESS);
}

