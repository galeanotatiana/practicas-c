#include <stdio.h>
int main(){

/* Escribir un programa que efectúe las siguientes operaciones: 
a) Declarar las variables enteras largas (long int) value1 y value2, e 
inicializar value1 a 200000. */

long int value1=200000, value2;

/* b) Declarar la variable Ptr como puntero a un tipo long  int. */
long int *ptr;

/* c) Asignar la dirección de la variable value1 a la variable de puntero 
Ptr. */
ptr = &value1;

/* d) Imprima el valor al que apunta Ptr. */
printf("ptr apunta a %li\n", *ptr);

/* e) Asignar a la variable value2 el valor al que apunta Ptr. */
value2 = *ptr;

/* f) Imprima el valor de value2. */
printf("value2 apunta a %li\n", value2);

/* g) Imprima la dirección de value1. */
printf("La direccion de value1 es: %p\n", &value1);

/* h) Imprima la dirección de value2. */
printf("La direccion de value2 es: %p\n", &value2);

/* i) Imprima la dirección almacenada en Ptr. ¿Es igual el valor  
impreso que la dirección de value1? */
printf("La direccion almacenada en ptr es: %p\n", &ptr);

if (ptr == &value1){
    printf("Las direcciones de ptr y value1 son iguales. Ambas apuntan a %p\n", &ptr);
}
else {
    printf("Las direcciones de ptr y value1 son distintas.\n");
    printf("ptr apunta a %p y value1 apunta a %p\n", &ptr, &value1);
}
}