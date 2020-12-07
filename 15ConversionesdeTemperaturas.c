/* 
 * File:   15ConversionesdeTemperaturas.c
 * Author: guija
 *
 * Created on 6 de diciembre de 2020, 01:00 PM
 */

#include <stdio.h>
#include <stdlib.h>

float num; 
// Definición de prototipo de función.
void ctof (float x);
void ftoc (float x);
void ctok (float x);
void ftok (float x);
void ktof (float x);
void ktoc (float x);
void grados ();

int main(int argc, char** argv) {
    
    float x;
    int opcion;
    
    do {
        
        printf ("Programa de conversiones de temporaturas\n\n");
        printf ("1. Grados Celsius a Fahrenheit\n");
        printf ("2. Grados Fahrenheit a Celsius\n");
        printf ("3. Grados Celsius a Kelvin\n");
        printf ("4. Grados Fahrenheit a Kelvin\n");
        printf ("5. Grados Kelvin a Celsius\n");
        printf ("6. Grados Kelvin a Fahrenheit\n\n");
        printf ("Elige una de las opciones: \n\n");
        scanf("%d", &opcion);
        
        switch(opcion){
            case 1: grados();
                    ctof (num);
                    system("cmd /c pause");
                    break;
            case 2: grados();
                    ftoc (num);
                    system("cmd /c pause");
                    break;
            case 3: grados();
                    ctok (num);
                    system("cmd /c pause");
                    break;
            case 4: grados();
                    ftok (num);
                    system("cmd /c pause");
                    break;
            case 5: grados();
                    ktof (num);
                    system("cmd /c pause");
                    break;
            case 6: grados();
                    ktoc (num);
                    system("cmd /c pause");
                    break;
            
            default: printf ("Opción de salir\n");
            system("cmd /c pause");
            break;
        }       
        system("cmd /c cls");   
        
}while (opcion != 6);

    return (EXIT_SUCCESS);
}

void grados(){
    printf("\nIngresa los grados a convertir: ");
    scanf("%f", &num);
}

void ctof (float x){
    float ctof = (x*1.8)+32;
    printf ("\nTu conversion es %.2f grados Fahrenheit\n", ctof);
}

void ftoc (float x){
    float ftoc = (x-32)*.55;
    printf ("\nTu conversion es %.2f grados Celsius\n", ftoc);
}

void ctok (float x){
    float ctok = x+273.15;
    printf ("\nTu conversion es %.2f grados Kelvin\n", ctok);
}

void ftok (float x){
    float ftok = ((x-32)*.55)+ 273.15;
    printf ("\nTu conversion es %.2f grados Kelvin\n", ftok);
}

void ktof (float x){
    float ktof = ((x-273.15)*1.8)+32;
    printf ("\nTu conversion es %.2f grados Fahrenheit\n", ktof);
}

void ktoc (float x){
    float ktoc = x-273.15;
    printf ("\nTu conversion es %.2f grados Celsius\n", ktoc);
}