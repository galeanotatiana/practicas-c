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

int calculos(int n1, int n2, int *suma, int *resta, int *prod){
    *suma = n1 + n2;
    *resta = n1 - n2;
    *prod = n1 * n2;
    return 0;
}

/* Programa principal: se declaran n1 y n2, y las variables iniciadas en 0 
Validar que las variables de cuentas se hayan modificado*/

int main(){
    int n1 = 5;                          
    int n2 = 2;
    int suma=0, resta=0, producto=0;     

    printf("Las variables antes de ejecutar la función\n");
    printf("Suma = %i, resta = %i, producto = %i\n", suma, resta, producto);

    calculos(n1, n2, &suma, &resta, &producto); /* El ejemplo decia usar &suma, &resta, &producto*/

    printf("Las variables despues de ejecutar la función\n");
    printf("Suma = %i, resta = %i, producto = %i\n", suma, resta, producto);

    return 0;
}