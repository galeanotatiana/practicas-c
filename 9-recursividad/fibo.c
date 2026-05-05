#include <stdio.h>

/*Generar un algoritmo recursivo que calcule el k-ésimo número de la serie de Fibonacci.
Ejemplos:
terminoSeriedeFibonacci (1) => 1
terminoSeriedeFibonacci (5) => 8*/

int fibo(int n){
/*serie infinita de la suma de los dos anteriores(Fn = F(n-1) + F(n-2))*/
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    } else {
        return fibo(n-1)+fibo(n-2);
    }
}

void main(){
    int fib = 6;
    printf("%d\n", fibo(fib));
} 