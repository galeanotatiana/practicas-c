// Hallar la temperatura maxima y minima registrada sabiendo que se toman 30 muestras.

#include <stdio.h>
int main(){
    int i, T, Tmax, Tmin;
    Tmax = -1000;
    Tmin = 1000;
    for (i = 1; i <= 30; i++){
        printf("Ingresar la temperatura: ");
        scanf("%i",&T);
        if (T > Tmax)
        {
            Tmax = T;
        }
        if (T < Tmin){
            Tmin = T;
        }
        }
    printf("La temperatura máxima ingresada es: %i \n", Tmax);
    printf("La temperatura minima ingresada es: %i \n", Tmin);
    return 0;
}