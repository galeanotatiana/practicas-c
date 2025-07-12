// Dado un arreglo de N elementos, escribir un programa que permita desplazar los elementos del arreglo una posición a la derecha, 
// de tal forma que el primero pase a la segunda posición, el segundo a la tercera y así sucesivamente.

#include <stdio.h>

int cambiar(int vector[], int N){
    int i, aux;
    aux = vector[N-1];
    for (i=N-1; i > 0; i--){
        vector[i] = vector[i-1];
    }
    vector[0] = aux;

    for (i = 0; i < N; i++){
        printf(" %i ", vector[i]);
    }
    }

int main(){
    int vecA[] = {5, 7, 4, 9, 3};
    int N = sizeof(vecA) / 4;
    printf("El vector tiene %i elementos \n", N);
    cambiar(vecA, N);
    return 0;
}