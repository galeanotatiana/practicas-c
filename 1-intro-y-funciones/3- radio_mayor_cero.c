#include <stdio.h>
/* Mostrar el perímetro de una 
circunferencia, siempre y cuando el radio que se ingresa sea mayor a cero*/

#define PI 3.1416

int main(){
    float radio, Perimetro;
    printf("Ingrese el radio: ");
    scanf("%f", &radio);
    if (radio > 0){
        Perimetro = 2 * radio * PI;
        printf("El perimetro de la circunferencia es %6.2f", Perimetro);
    }
    else{
        printf("Error en el ingreso");
    }
    return 0;
}