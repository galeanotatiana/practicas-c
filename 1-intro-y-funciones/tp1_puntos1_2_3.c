#include <stdio.h>

int suma(int a, int b){
    return a+b;
}

int resta(int a, int b){
    return a-b;
}

int producto(int a, int b){
    return a*b;
}

//Los ejercicios no piden programa principal, pero es para probar
int main(){
    int a = 10;
    int b = 5;
    printf("%i \n", suma(a,b));
    printf("%i \n", resta(a,b));
    printf("%i \n", producto(a,b));
    return 0;
}
