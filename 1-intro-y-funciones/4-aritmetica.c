#include <stdio.h>
/*Se reciben dos numeros y un simbolo de
operador aritmetico como parámetro. Se
devuelve la operación entre ambos números.*/

int main(){
    int A, B;
    float resultado;
    char operacion;
    printf("Ingrese la operación ");
    scanf("%c",&operacion);
    printf("Ingrese dos números  ");
    scanf("%i",&A);
    scanf("%i",&B);

    switch(operacion){
        case '+':
        resultado = A + B;
        break;
        case '-':
        resultado = A - B;
        break;
        case '/':
        resultado = A / B;
        break;
        case '*':
        resultado = A * B;
        break;
        default:
        resultado = 0;
        break;
    }
printf("El resultado es %6.2f", resultado);
return 0;
}