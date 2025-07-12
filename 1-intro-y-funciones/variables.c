// Tipos de variables y mostrarlas en pantalla

#include <stdio.h>

int main(){
    int x; // Declaro la variable "x" y le asigno el tipo número entero (int)
    float y; // Declaro la variable "y" y le asigno el tipo número de punto flotante simple (float)
    double y2; // Declaro la variable "y2" y le asigno el tipo número de punto flotante doble (double)
    char z; // Declaro la variable "z" y le asigno el tipo caracter (char)

    x = 5; // Le doy a x un valor de 5
    y = 10,50; // Le doy a y un valor de 10,50
    y2 = 25,59; // Le doy a y2 un valor de 25,59
    z = 'a'; // Le doy a z un valor de "a"


    printf ("El valor de x es: %i.\nEl alor de y es: %f. \nEl valor de y2 es: %f.\nEl valor de z es:%c.\n", x, y, y2, z); // Imprimo por pantalla un mensaje con el valor de x
    return 0;
}