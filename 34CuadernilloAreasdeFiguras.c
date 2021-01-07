/* 
 * File:   34CuadernilloAreasdeFiguras.c
 * Author: guija
 *
 * Created on 3 de enero de 2021, 03:54 PM
 */

#include <stdio.h>
#include <stdlib.h>

// Definición del prototipo de función.
void areacuadrado(float, float);
void arearectan (float, float);
void areatrian (float, float);
void areacircu (float);
void arearombo (float, float);
int main(int argc, char** argv) {
    // Variables declaradas e inicializadas.
    int opcion = 0;
    float base=0, altura=0, radio=0, diagonalmayor=0, diagonalmenor=0; 
    float longirudlado=0, perimetro=0, ladopenta=0, apotema=0;
    
    //Programa que calcula el área de varias figuras.
    printf ("\n\tPrograma que calcula el área de varias figuras.");
    printf ("\n\n¿De qué figura deseas obtener el área?\n");
    // Menú.
    printf ("\n1. Cuadrado.");
    printf ("\n2. Rectángulo.");
    printf ("\n3. Triángulo.");
    printf ("\n4. Circulo.");
    printf ("\n5. Rombo.");
    // Elegir opción.
    printf ("\n\tEliga una de las opciones existentes o una no existente "
            "para salir: ");
    printf ("\nOpción: ");
    scanf ("%d", &opcion);
    // En caso de elegia una opción no existente.
    if (opcion!=1 && opcion!=2 && opcion!=3 && opcion!=4 && opcion!=5)
        printf ("\n\nEligió una opción inexistente o decidió salir.");

    //Imprementación menú
    switch (opcion){
        case 1:{// Área de un cuadrado.
            areacuadrado(base, altura);//Llamamos a nuestra función.
            break;
        }
        case 2:{// Área de un rectángulo.
            arearectan(base, altura);//Llamamos a nuestra función.
            break;
        }
        case 3:{// Área de un triángulo.
            areatrian(base, altura);//Llamamos a nuestra función.
            break;
        }
        case 4:{// Área de un circulo.
            areacircu(radio);//Llamamos a nuestra función.
            break;
        }
        case 5:{// Área de un rombo.
            arearombo(diagonalmayor, diagonalmenor);//Llamamos a nuestra función.
            break;
        }
    }
    
    return (EXIT_SUCCESS);
}
// Función ya está implementada.
void areacuadrado(float base, float altura){
    float area = 0;
    printf ("\n\t----Área de un cuadrado----\n");
    printf ("\nDigite el valor de la base en m:: ");
    scanf("%f", &base);
    printf ("\nDigite el valor la altura en m:: ");
    scanf("%f", &altura);
    area=base*altura;// Operaciones.
    printf ("\nEl área del cuadrado es: %.2f metros cuadrados.", area);
}
void arearectan (float base, float altura){
    float area = 0;
    printf ("\n\t----Área de un rectángulo----\n");
    printf ("\nDigite el valor de la base en m: ");
    scanf("%f", &base);
    printf ("\nDigite el valor la altura en m: ");
    scanf("%f", &altura);
    area=base*altura;// Operaciones.
    printf ("\nEl área del rectángulo es: %.2f metros cuadrados.", area);
}
void areatrian (float base, float altura){
    float area = 0;
    printf ("\n\t----Área de un triángulo----\n");
    printf ("\nDigite el valor de la base en m:: ");
    scanf("%f", &base);
    printf ("\nDigite el valor la altura en m:: ");
    scanf("%f", &altura);
    area=(base*altura)/2;// Operaciones.
    printf ("\nEl área del triángulo es: %.2f metros cuadrados.", area);
}                                          
void areacircu (float radio){
    float area = 0;
    printf ("\n\t----Área de un circulo----\n");
    printf ("\nDigite el valor del radio en m: ");
    scanf("%f", &radio);
    area=(3.1416)*(radio*radio);// Operaciones.
    printf ("\nEl área del circulo es: %.2f metros cuadrados.", area);
}
void arearombo (float diagonalmayor, float diagonalmenor){
    float area = 0;
    printf ("\n\t----Área de un rombo----\n");
    printf ("\nDigite el valor de la diagonal mayor en m: ");
    scanf("%f", &diagonalmayor);
    printf ("\nDigite el valor de la diagonal menor en m: ");
    scanf("%f", &diagonalmenor);
    area=(diagonalmayor*diagonalmenor)/2;// Operaciones.
    printf ("\nEl área del rombo es: %.2f metros cuadrados.", area);
}
