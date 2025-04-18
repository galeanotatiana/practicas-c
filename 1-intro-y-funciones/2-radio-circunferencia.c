/*Se ingresa el radio para mostrar el perímetro de la circunferencia*/
#include <stdio.h>
#define PI 3.1416

int main(){
    float radio,Perimetro;
    printf("Ingrese el radio: ");
    scanf("%f", &radio);
    Perimetro = 2*PI*radio;
    printf("El perímetro de la circunferencia es %6.2f", Perimetro);
    return 0;
}

