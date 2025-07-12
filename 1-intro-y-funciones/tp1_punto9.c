#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tipo_de_bomba(int bomba){

    switch(bomba) {
        case 0:
        printf("No hay establecido un valor definido para el tipo de bomba \n");
        break;

        case 1:
        printf("La bomba es una bomba de agua \n");
        break;

        case 2:
        printf("La bomba es una bomba de gasolina \n");
        break;

        case 3:
        printf("La bomba es una bomba de hormigon \n");
        break;

        case 4:
        printf("La bomba es una bomba de pasta alimenticia \n");
        break;

        default:
        printf("No existe un valor valido para tipo de bomba \n");
        break;
    }
}

// Escriba un programa que llame a la función anterior, en un ciclo infinito, con un entero aleatorio entre 0 y 10.
// El ciclo debe terminar cuando el entero aleatorio sea el número 9.


int main(){

int random;

srand(time(NULL));
do {
    random = rand()%11;
    tipo_de_bomba(random);
} while (random != 9);

return 0;
}