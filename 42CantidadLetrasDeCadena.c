/* 
 * File:   42Actividad.c
 * Author: guija
 *
 * Created on 12 de enero de 2021, 02:55 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char** argv) {
    //Ejercicio en clase, contar cuántas veces aparece una letra del abecedario en una frase.
    char frase[30];
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0;
    int r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
    int contador=0;
    printf("\n\nIngrese la frase que quiere evaluar: ");
    gets(frase);
    
    for (contador=0; contador<strlen(frase);contador++){
            switch (frase[contador]){
                case 'a': a++; break;
                case 'b': c++; break;
                case 'd': d++; break;
                case 'e': e++; break;
                case 'f': f++; break;
                case 'g': g++; break;
                case 'h': h++; break;
                case 'i': i++; break;
                case 'j': j++; break;
                case 'k': k++; break;
                case 'l': l++; break;
                case 'm': m++; break;
                case 'n': n++; break;
                case 'o': o++; break;
                case 'p': p++; break;
                case 'q': q++; break;
                case 'r': r++; break;
                case 's': s++; break;
                case 't': t++; break;
                case 'u': u++; break;
                case 'v': v++; break;
                case 'w': w++; break;
                case 'x': x++; break;
                case 'y': y++; break;
                case 'z': z++; break;
            }
    }
    
    printf("\nLetra a: %d ", a);
    printf("\nLetra b: %d ", b);
    printf("\nLetra c: %d ", c);
    printf("\nLetra d: %d ", d);
    printf("\nLetra e: %d ", e);
    printf("\nLetra f: %d ", f);
    printf("\nLetra g: %d ", g);
    printf("\nLetra h: %d ", h);
    printf("\nLetra i: %d ", i);
    printf("\nLetra j: %d ", j);
    printf("\nLetra k: %d ", k);
    printf("\nLetra l: %d ", l);
    printf("\nLetra m: %d ", m);
    printf("\nLetra n: %d ", n);
    printf("\nLetra o: %d ", o);
    printf("\nLetra p: %d ", p);
    printf("\nLetra q: %d ", q);
    printf("\nLetra r: %d ", r);
    printf("\nLetra s: %d ", s);
    printf("\nLetra t: %d ", t);
    printf("\nLetra u: %d ", u);
    printf("\nLetra v: %d ", v);
    printf("\nLetra w: %d ", w);
    printf("\nLetra x: %d ", x);
    printf("\nLetra y: %d ", y);
    printf("\nLetra z: %d ", z);
   
    return (EXIT_SUCCESS);
}

