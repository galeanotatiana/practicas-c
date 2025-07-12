#include <stdio.h>

int main(){

//  Escribir un programa que efectúe las siguientes operaciones:

// a) Declarar las variables enteras largas (long int) value1 y value2, e inicializar value1 a 200000.
    long int value1, value2;
    value1 = 200000;

// b) Declarar la variable Ptr como puntero a un tipo long  int.
    long int *ptr;

// c) Asignar la dirección de la variable value1 a la variable de puntero Ptr.
    ptr = &value1;

// d) Imprima el valor al que apunta Ptr.
    printf("El valor al que apunta ptr es: %i \n", *ptr);

// e) Asignar a la variable value2 el valor al que apunta Ptr.
    value2 = *ptr;

// f) Imprima el valor de value2.
    printf("El valor de value2 es: %i \n", value2);

// g) Imprima la dirección de value1.
    printf("La direccion de value1 es: %i \n", &value1);

// h) Imprima la dirección de value2.
    printf("La direccion de value2 es: %i \n", &value2);

// i) Imprima la dirección almacenada en Ptr. ¿Es igual el valor  impreso que la dirección de value1?
    printf("La direccion de *ptr es: %p \n", &ptr);

}