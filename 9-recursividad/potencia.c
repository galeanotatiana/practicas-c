/* Potencia a^b de forma recursiva */
#include <stdio.h>
int potencia(int a, int b){
    if (b==0) return 1;            /*Caso base*/
    else return (a * potencia(a, b-1));    /*Paso recursivo*/
}

int main(){
    int base, exponente, resultado;
    printf("\nIngrese un numero base: ");
    scanf("%i", &base);
    printf("\nIngrese un numero exponente: ");
    scanf("%i", &exponente);
    resultado = potencia (base, exponente);
    printf("\n%i elevado a %i es %i.\n", base, exponente, resultado);
    return 0;
}


