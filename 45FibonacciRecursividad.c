/* 
 * File:   45FibonacciRecursividad.c
 * Author: guija
 *
 * Created on 21 de enero de 2021, 10:02 AM
 */

#include <stdio.h>
#include <stdlib.h>

long fibonacci(long);

int main(int argc, char** argv) {
// Recursividad - Serie fibonacci.
    int num=0;
    long res=0;
    printf("Ingrese un número entero: ");
    scanf ( "%ld", &num);
    res = fibonacci(num);
    printf("Fibonacci(%ld) = %d\n", num, res);
    return (EXIT_SUCCESS);
}
long fibonacci(long n)
{
    if (n == 0 || n == 1){
        return n;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
