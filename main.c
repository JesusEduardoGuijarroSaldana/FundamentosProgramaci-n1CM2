/* 
 * File:   main.c
 * Author: guija
 *
 * Created on 2 de noviembre de 2020, 02:25 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float Resuno = 0;
    float Resdos = 0;
    int Restres = 0;
    
    Resuno = (6.18/5)*(((14.1-4)/2)*((14.1-4)/2));
    Resdos = ((8.9*34)/17);
    Restres = 8-7;
    
    printf ("El primer resultado es: " "%f",Resuno);
    printf ("\nEl segundo resultado es: " "%f",Resdos);
    printf ("\nEl tercer resultado es: " "%d",Restres);
  
    return (EXIT_SUCCESS);
}

