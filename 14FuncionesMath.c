/* 
 * File:   14FuncionesMath.c
 * Author: guija
 *
 * Created on 30 de noviembre de 2020, 12:27 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
    float x = 900.0;
    float y;
    
    printf ("Función sqrt(x)\n");
    printf("Raíz cuadrada de %.1f: %.2f\n\n", x, sqrt(x));
    
    x= 1.0;
    
    printf ("Función exp(x)\n");
    printf("Función exponencial de %.1f: %.6f\n\n", x, exp(x));
    
    x = exp(x);
    
    printf ("Función log(x)\n");
    printf("Logaritmo natural de %f (de base e): %.1f\n\n", x, log(x));
    
    x =  log(x);
    
    printf ("Función LoglO(x)\n");
    printf("Logaritmo natural de %.1f (de base 10): %.1f\n\n", x, log10(x));
    
    x = -10;
    
    printf ("Función fabs (x)\n");
    printf ("Valor absoluto de %.2f: %.2f\n\n", x, fabs (x));
    
    x = 55.3;
    
    printf ("Función ceil(x)\n");
    printf ("Redondea a %.2f al entero más pequeño que no sea menor que x: %.2f\n\n", x, ceil(x));
    
    x = 55.3;
    
    printf ("Función floor(x)\n");
    printf ("Redondea a %.2f al entero más grande que no mayor que x: %.2f\n\n", x, floor(x));
    
    x = 8;
    y = 6;
    
    printf ("Función pow(x, y)\n");
    printf ("%.2f Elvado a la %.2f potencia: %.2f \n\n", x, y, pow(x, y));
    
    x = 13.657;
    y = 2.333;

    printf ("Función fmod(x, y)\n");
    printf ("Residuo de %.3f / %.3f como un número de punto flotante: %.3f \n\n", x, y, fmod(x, y));
    
    x = 0.0;
    
    printf ("Función sin(x)\n");
    printf ("Seno trigonométrico de %.1f (x en radianes): %.1f \n\n", x, sin(x));
    
    printf ("Función cos(x)\n");
    printf ("Coseno trigonométrico de %.1f (x en radianes): %.1f \n\n", x, cos(x));
    
    printf ("Función tan(x)\n");
    printf ("Tangente trigonométrica de %.1f (x en radianes): %.1f \n\n", x, tan(x));
    
    
    return (EXIT_SUCCESS);
}

