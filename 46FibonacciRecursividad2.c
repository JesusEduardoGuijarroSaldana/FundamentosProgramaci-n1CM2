/* 
 * File:   46FibonacciRecursividad2.c
 * Author: guija
 *
 * Created on 21 de enero de 2021, 11:30 AM
 */

#include <stdio.h>
#include <stdlib.h>

long fibonacci(long); 

int main(int argc, char** argv) {
// Recursividad - Serie fibonacci.
    int num=0, i=0;
 
    printf("\nEscribe el número de elementos:\n");
    scanf("%d",&num);
    for (i=1; i<=num; i++){
        printf("%d, ", fibonacci(i));
    }
    return (EXIT_SUCCESS);
}

long fibonacci(long n){
    if (n == 0 || n == 1){
        return n;
    }else{
        return (fibonacci(n-1) + fibonacci (n-2));
    }
        
}
