/*Escribir un programa en C que permita procesar una matriz:
El programa debe tener una función que permita cargar una matriz de 20x20 con números generados de
forma aleatoria cuyo rango varía entre MIN y MAX que son parametros de la función.
Además, deberás escribir otra función que reciba la matriz y permita retornar la sumatoria de los valores
de la diagonal principal.
Por último se solicita escribir otra función que reciba la matriz y retorne en un único valor la suma
de los valores de las filas pares con los elementos de las columnas impares.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define F 20
#define C 20
void matriz_aleatorios(int M[F][C], int min, int max){
    int i=0, j=0;
    for (i=0; i<F; i++){
        for (j=0; j<C; j++){
            M[i][j] = rand()%(max-min+1)+min;
        }
    }
}

void suma_diagonal(int M[F][C]){
    int suma=0;
    for (int i=0; i<F; i++){
        suma = suma + M[i][i];
    }
    printf("La suma de la diagonal principal es %i\n", suma);
}

void pares_impares(int M[F][C]){
    int i=0, j=0, sum=0;
    for (i=0; i<F; i+=2){ /*filas pares, empieza en 0 y se va sumando 2*/
        for (j=1; j<C; j+=2){ /*columnas impares, empieza en 1 y se va sumando 2*/
            sum += M[i][j];
        }
    }
    printf("La suma de las filas pares con las columnas impares es: %i",sum);
}

int main(){
    srand(time(NULL));
    int M[F][C];
    int min = 1;
    int max = 10;
    matriz_aleatorios(M,min,max);
    suma_diagonal(M);
    pares_impares(M);
    return 0;
}