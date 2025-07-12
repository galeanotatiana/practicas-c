/* Ejercicio de final: funcion recursiva que sume los digitos de un numero.
Si n = 123, resultado = 1+2+3 = 6 */
#include <stdio.h>

int sumar_digitos(int n){
    if (n<10) return 1;
    else return (n%10) + sumar_digitos(n/10);
}

int main(){
    int numero, resultado;
    printf("\nIngrese un numero: ");
    scanf("%i", &numero);
    resultado = sumar_digitos(numero);
    printf("\nLa suma de los digitos de %i es %i.\n", numero, resultado);
    return 0;
}