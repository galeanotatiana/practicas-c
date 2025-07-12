/* Contar digitos de un numero */
#include <stdio.h>

int contar_digitos(int n){
    if ((n/10) == 0) return 1;
    else return 1 + contar_digitos(n/10);
}

int main(){
    int numero, resultado;
    printf("\nIngrese un numero para contar sus digitos: ");
    scanf("%i", &numero);
    resultado = contar_digitos(numero);
    printf("\n%i tiene %i digitos.\n", numero, resultado);
    return 0;
}