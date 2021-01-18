/* 
 * File:   funciones2.h
 * Author: guija
 *
 * Created on 18 de enero de 2021, 10:28 AM
 */

#ifndef FUNCIONES2_H
#define	FUNCIONES2_H

#ifdef	__cplusplus
extern "C" {
#endif

float pi= 3.1452;

int suma (int a, int b){
    return a+b;
}
int resta (int a, int b){
    return a-b;
}
char primer_caracter (char* cadena){
    return cadena [0];
}
double area_circulo(int radio){
    return pi*radio*radio;
}


#ifdef	__cplusplus
}
#endif

#endif	/* FUNCIONES2_H */

