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

// Dados dos vectores A y B de igual cantidad de elementos cargados con la función del
// punto 1, obtener el producto escalar: Σ A(i) * B(i).

#define N 7

void ProductoEscalar(int vector1[], int vector2[], int producto[]){
    int i;

    for (i = 0; i < N; i++){
                producto[i] = vector1[i] * vector2[i];
            }
    }

void imprimir(int vector1[]){
    for (int i = 0; i < N; i ++){
        printf("%i ", vector1[i]);
    }
}


int main() {

    int vecA[N];
    vector_random(vecA, N, 1, 4);

    int vecB[N];
    vector_random(vecB, N, 5, 10);

    int prod[N];  // Acá se va a almacenar el producto escalar
    ProductoEscalar(vecA, vecB, prod);

    // Mostrar el primer vector
    printf("El primer vector generado es: ");
    imprimir(vecA);

    // Mostrar el segundo vector
    printf("\nEl segundo vector generado es: ");
    imprimir(vecB);

    // Mostrar el producto escalar
    printf("\nEl producto escalar es: ");
    imprimir(prod);

    return 0;
}

