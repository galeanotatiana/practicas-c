#include <stdio.h>

void rotar(int v[], int veces, int n){
    int aux=0, j=0;
    for (int i = 0; i < veces; i++){
        j = 0;
        int aux = v[n-1];
        do
        {
            v[n-j] = v[n-j-1];
        } while (j+1<n);
        v[0] = aux;
    }

}

// Diferencia entre pasar un puntero por valor y por referencia