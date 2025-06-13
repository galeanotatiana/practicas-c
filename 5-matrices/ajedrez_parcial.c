/*No está bien hecho, así lo hice en el parcial.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4
void ajedrez(int matriz[N][N], int min, int max){
    int i, j, valor;
    for (i = 0; i < N; i++){
        valor = rand()%(max-min)+min;
        matriz[i][i] = valor;
    }
    for (i=0; i<N; i++){
        for (j=i+2; j<N; j++){
            valor = rand()%(max-min)+min;
            matriz[i][j] = valor;
        }
    }
    for (i=2; i<N; i++){
        for (j=0; j<N; j++){
            valor = rand()%(max-min)+min;
            matriz[i][j] = valor;
        }
    }
}

int suma_elementos(int matriz[N][N]){  /*Cuando lo estaba haciendo en vscode vi que acá no habia puesto int en el examen*/
    int i, j, suma = 0;
    for (i=1; i<N; i++){
        for (j=3; j<N; j--){
            suma = suma + matriz[i][j];
            i++;
            j++;
        }
    }
    return suma;
}

int main(){
    srand(time(NULL));
    int matriz[N][N] = {0};
    int min = 1;
    int max = 10;
    ajedrez(matriz, min, max);
    suma_elementos(matriz);
    return 0;
}

