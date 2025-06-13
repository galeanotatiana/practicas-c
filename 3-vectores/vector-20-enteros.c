/*Agregar 20 numeros enteros por teclado a un arreglo llamado "arreglo"*/
#include <stdio.h>
#define N 20
int main(){
    int arreglo[N], i;
    for (i=0; i<N; i++){
        printf("\n Ingrese un número: ");
        scanf("%d", &arreglo[i]);
    }


    /*Mostrar los 20 numeros enteros que fueron ingresados*/
    for (i=0; i<N; i++){
        printf("\n En la posición %i se cargó el número %i", i, arreglo[i]);
    }

    /*La sumatoria de todos los numeros del arreglo*/
    int sum=0;
    for (i=0; i<N; i++){
        sum = sum + arreglo[i];
    }
    printf("\n La sumatoria es: %i", sum);

    /*La cantidad de numeros negativos del arreglo*/
    int cant=0;
    for(i=0; i<N; i++){
        if(arreglo[i]<0){
            cant++;
        }
    }
    printf("\n En el arreglo hay %i numeros negativos", cant);

    return 0;
}