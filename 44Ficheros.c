/* 
 * File:   44Ficheros.c
 * Author: guija
 *
 * Created on 19 de enero de 2021, 02:26 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*Programa que pida 3 números al usuario y guarde 4 líneas en un archivo 
denominado cursoAF1.txt. El contenido de las líneas debe ser el siguiente: 
las 3 primeras líneas, cada uno de los datos proporcionados. La cuarta línea, 
el valor medio de los tres datos anteriores.*/

int main(int argc, char** argv) {
    int num1=0, num2=0, num3=0; 
    float media=0;
    char cadena1[] = "Número 1:";
    char cadena2[] = "Número 2:";
    char cadena3[] = "Número 3:";
    char cadena4[] = "Media de los números:";
    FILE* fichero; // se crea un fichero.
    fichero = fopen("cursoAF1.txt", "wt"); // se abre el fichero creado.
    
    printf("Ingrese 3 números: \n"); // Se piden 3 números al usuario.
    printf("Número 1: ");
    scanf("%d",&num1);
    printf("Número 2: ");
    scanf("%d",&num2);
    printf("Número 3: ");
    scanf("%d",&num3);
    media = num1+num2+num3;
    media = media/3;
    //La función fprint escribe una cadena en un fichero.
    fprintf(fichero,"%s  %d\n",cadena1,num1);
    fprintf(fichero,"%s  %d\n",cadena2,num2);
    fprintf(fichero,"%s  %d\n",cadena3,num3);
    fprintf(fichero,"%s  %.2f\n",cadena4,media);
    fclose(fichero); // se cierra el fichero.
    printf("Proceso completado");

    return (EXIT_SUCCESS);
}

