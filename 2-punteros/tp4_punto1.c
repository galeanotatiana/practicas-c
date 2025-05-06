/* Crear una función, que reciba dos números enteros como parámetros, 
calcule el resultado de la suma, el de la resta y el del producto, y 
asigne dichos cálculos a tres variables pasadas por referencia a la 
misma función. En caso de finalización exitosa, la función deberá 
retornar cero. Luego de llamar a la función, validar que dichas 
variables hayan sido modificadas */

/*Funcion: 
parametros de entrada: dos numeros enteros y tres variables de +, - y * 
salida: retornar 0 si finalizó correctamente*/

#include <stdio.h>

int calculos(int n1, int n2, int suma, int resta, int prod){
    int *p_suma, *p_resta, *p_prod;      /*Declaro punteros a enteros*/
    p_suma = &suma;                      /*Asigno la direccion de memoria de "suma" al puntero p_suma*/
    *p_suma = n1 + n2;                   /*Modifico la variable "suma" desde el puntero*/

    p_resta = &resta;
    *p_resta = n1 - n2;

    p_prod = &prod;
    *p_prod = n1 * n2;

    printf("Valor de suma: %i\n", suma);
    printf("Valor de resta: %i\n", resta);
    printf("Valor de prod: %i\n", prod);       /*Hasta acá funciona bien*/

    return 0;
}

/* Programa principal: se declaran n1 y n2, y las variables iniciadas en 0 
Validar que las variables de cuentas se hayan modificado*/

int main(){
    int n1 = 5;                          /*Declaro variables enteras con los numeros*/
    int n2 = 2;
    int suma=0, resta=0, producto=0;     /*Declaro variables enteras para las operaciones*/

    printf("Las variables antes de ejecutar la función\n");
    printf("Suma = %i, resta = %i, producto = %i\n", suma, resta, producto);

    calculos(n1, n2, suma, resta, producto); /* El ejemplo decia usar &suma, &resta, &producto*/

    /* printf("Las variables despues de ejecutar la función\n");
    printf("Suma = %i, resta = %i, producto = %i\n", suma, resta, producto); */ /*Esta parte devuelve todos en 0 ¿?*/

    return 0;
}