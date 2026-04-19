#include <stdio.h>
double sumaimpares(int n){
    if (n<=1) return 1.0;
    return ((2*n-1)+sumaimpares(n-1));
}

int main(){
    int n;
    double sumaimpares(int n);

    printf("Escriba un numero positivo: ");
    scanf("%i", &n);
    printf("Suma de los primeros %d impares: %lf. \n", n, sumaimpares(n));
    return 0;
}