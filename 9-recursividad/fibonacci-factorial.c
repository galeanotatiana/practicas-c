#include <stdio.h>
/* factorial(n) = n*factorial(n-1) si n>0 y 0 en otro caso.
fibonacci(n) = fibonacci(n-1) + fibonacci(n-2) si n>1; fibonacci(n)=n en otro caso.
par(n) = impar(n-1) si n>1.
impar(n) = par(n-1) si n>; par(0) = true ; impar(0) = false. */

long factorial (int n) {
    if (n == 0)
    return 1;
    else
    return (n*factorial(n-1));
}

/* sucesión de fibonacci de manera recursiva */
long fibonacci (int n){
    if (n==0 || n==1)
    return (n);
    else
    return (fibonacci(n-1) + fibonacci(n-2));
}

/* sucesion de fibonacci de manera iterativa */
long fiboiterativa(int n){
    long a1 = 0;
    long a2 = 1;
    long a3;
    int i;
    for (i = 1; i<=n; i++){
        a3 = a1 + a2;
        a1 = a2;
        a2 = a3;
    }
    return(a1);
}

/* programa para decidir si los numeros ingresados por teclado son pares o impares - RECURSIVIDAD INDIRECTA */

int par(int n);
int impar(int n);

int main(){
    int n;
    do {
        printf("Introduzca un numero positivo: ");
        scanf("%i", &n);
    } while (n<0);
    if (par(n)) printf("Es par.\n");
    else printf("Es impar.\n");
    printf("Haciendo factorial de %i...\n", n);
    printf("%li \n", factorial(n));
    return 0;
}

int par(int n){
    if (n==0) return 1;
    else return (impar(n-1));
}

int impar(int n){
    if (n==0) return 0;
    else return(par(n-1));
}