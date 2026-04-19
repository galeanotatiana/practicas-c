#include <stdio.h>

/*Muestra como funciona la pila en recursividad.*/

void contar(int valor){
    valor--;
    printf("%2d \n", valor);
    if (valor>0) contar(valor);
    printf("%2d \n", valor);
}

int main(){
    int num;
    num = 8;
    contar(num);
    return 0;
}