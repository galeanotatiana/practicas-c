// Crear una función con cuatro parámetros (v, N, menor, mayor) que cargue un vector v de longitud N 
// con números enteros aleatorios comprendidos entre menor  y mayor.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int vector_random(int v[], int N, int menor, int mayor){   
    srand(time(NULL));                         
    int i;
    for (i = 0; i < N; i++){                  // A cada elemento del vector
        v[i] = rand () % (mayor - menor + 1) + menor;     // Para encontrar un valor aleatorio entre el mayor y el menor
    }
}

int main(){
    
    
    //Para ver si funciona

    int N = 10;
    int vector[N];
    int menor = 17;
    int mayor = 35;

    vector_random(vector, N, menor, mayor);
    for (int i = 0; i < N; i++){
        printf(" %i",  vector[i]);
    }
    return 0;
}


