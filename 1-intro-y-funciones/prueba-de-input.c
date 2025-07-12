#include <stdio.h>

int main() {
    int x;
    printf("Introduce un valor para x: ");
    if(scanf("%i", &x) != 1) {
        printf("Error en la entrada\n");
        return 1;
    }
    printf("Valor ingresado: %i\n", x);
    return 0;
}
