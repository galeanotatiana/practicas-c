#include <stdio.h>
#include <stdbool.h>

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
        if (B == 0){
            printf("No se puede dividir por cero.");
        }
        else{
        resultado = A / B;
        }
        break;
        case '*':
        resultado = A * B;
        break;
        default:
        resultado = 0;
        break;
    }
bool div_cero = (operacion=='/' && B==0);
if (!div_cero){
    printf("El resultado es %6.2f", resultado);
}
return 0;
}