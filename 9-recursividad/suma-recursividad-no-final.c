#include <stdio.h>

int suma(int num1, int num2){
    if (num2 == 0){
        return num1;
    }
    else return 1 + suma(num1, num2 - 1);
}

int main(){
    int num1, num2, res;
    printf("Introduce el primer numero a sumar: ");
    scanf("%i", &num1);
    printf("Segundo numero a sumar: ");
    scanf("%i", &num2);
    res = suma(num1, num2);
    printf("El resultado de la suma de %i + %i = %i.\n", num1, num2, res);
    return 0;
}