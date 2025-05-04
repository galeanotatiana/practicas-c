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
    printf("%i, suma);
}
