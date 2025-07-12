// Ejercicio corregido en clase

// Crear una función que cargue un vector de 30 elementos con la letra “x"
// y coloque en una ubicación aleatoria una “A” y en otra ubicación aleatoria
// que no sea la misma que tiene la letra “A” una letra “B”

#include <stdio.h>
#include <time.h>
#define N 30

void letras(char letra[], int tam){     //Se define la función
    int valor = 0; int i; int C1 = 0;
    srand(time(NULL));                  //Se inicializa srand
    for (i = 0; i < tam; i++);
        C1 ++i;
        valor = rand()%tam-1;
        if (C1 == 1){
            letra[valor] = 'A';
        }
        if (C1 == 2){
            if (letra[valor] != 'A'){
                letra[valor] = 'B';

            }
        }
    }
}

int main(void) {
    char x[N];
    char asig[] = 'x';
    for (int i = 0; i < N; i++){
        x[i] = asig[0];
        printf("Elemento --> %c / Posicion --> %d ? \n", x[i], i);
    }

    letrax(x, N);
    for (int n = 0; n < N; n ++) {
        printf("Elemento --> %c / Posicion --> %d \n", x[n], n);
    }
}