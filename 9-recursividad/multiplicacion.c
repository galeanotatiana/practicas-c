#include <stdio.h>
#include <stdlib.h>

/* Dados dos números enteros m y n, construir una función recursiva que devuelva el
producto de ambos, calculando el mismo como sumas sucesivas. Esto es:
m*n=m+m+...+m, n veces.
Ejemplos:
producto(5, 3) => 15
producto (10, 4) => 40 */

int producto(int m, int n){
    if (n==0){                          /* cuando n llega a 0 se termina */
        return 0;
    } else {                           
        return m + producto(m, n-1);   /* a m se le suma lo que de la proxima llamada recursiva */
    }
}

void main(){
    int a = 3;
    int b = 5;
    int resultado = producto(a, b);
    printf("%d\n", resultado);
}