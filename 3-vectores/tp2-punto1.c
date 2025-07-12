// Crear una función con cuatro parámetros (v, N, menor, mayor) que cargue un vector v 
// de longitud N  con números enteros aleatorios comprendidos entre menor  y mayor.  

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

void funcion(int v[], int n, int mayor, int menor){
    for (int i=0; i<n; i++)
    {
        v[i]=(rand()%(mayor - menor)+1)+menor;
    }
}

int main() {
 int vector[N];
 int menor = 15;
 int mayor = 50;

 funcion(vector, N, menor, mayor);
}