// Teniendo un vector de 10 elementos, con enteros del 0 al 9, hacer una función que rote el vector.
// Recibe como parámetros el vector original, el aux y n, siendo n la cantidad de veces que se va a rotar.
// Devuelve el vector original y el rotado.

#include <stdio.h>
#define N 10
void rotar(int VEC[N], int veces){
    // N = tamaño del vector
    // veces = cant. de veces que se va a rotar
    int i, j, aux;    // "i" es para el primer for, "j" para el segundo, "aux" para almacenar un elemento temporalmente
                      //  para la rotación
    // Ciclo "for" para recorrer el vector
    for (i = 0; i<veces; i++){
        // Ciclo "for" arrancando desde el último elemento del vector
        for (j=N-1; j>0; j--){
            aux = VEC[j];       // En la primera iteración:
                                // El último elemento se guarda en la variable auxiliar. Ejemplo: aux = 9
            VEC[j] = VEC[j-1];  // En la primera iteración:
                                // El anteúltimo elemento pasa a ser el último. Ej: VEC[j] = 8, aux = 9
            VEC[j-1] = aux;
        }
    }
}

void imprimir(int VEC[N]){
    int i;
    for (i=0; i<N; i++){
        printf("%i, ",VEC[i]);
    }
    printf("\n\n");
}

int main(){
    int VEC[N]={0,1,2,3,4,5,6,7,8,9};
    imprimir(VEC);
    rotar(VEC,2);
    imprimir(VEC);
    return 0;
}