// Hacer una función que reciba dos vectores A y B de números enteros de n cantidad de elementos
// Siendo n un número par, y retorne la suma de los elementos que ocupan las posiciones pares del primero con los elementos
// que ocupan las impares del segundo.  Recuerde que en C las posiciones en los arreglos se numeran desde el cero,
// y que el cero es un número par.

#include <stdio.h>

int suma_impares (int vecA[], int vecB[], int N) {
    int sumatoria_par = 0;
    int sumatoria_impar = 0;
    printf("Las sumatorias se inicializaron en 0 \n");
    for (int i = 0; i < N; i+=2){
                sumatoria_par += vecA[i];
        }
    printf("La sumatoria de los elementos pares está en %i \n", sumatoria_par);
    for (int j = 1; j < N; j+=2){
            sumatoria_impar += vecB[j];
    }
    printf("La sumatoria de los elementos impares está en %i \n", sumatoria_impar);
    int suma = sumatoria_par + sumatoria_impar;
    

    printf("La suma total es %i \n", suma);
    return suma;
}

int main(){
    int vecA[] = {2, 1, 4, 3, 6, 5};
    int vecB[] = {1, 2, 3, 4, 5, 6};

    suma_impares(vecA, vecB, 6);
    return 0;
}