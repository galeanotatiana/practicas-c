#include <stdio.h>

/*sumar los digitos de un numero natural. revisar como funciona ?? */
int SumaRecursiva(int n){
    if (n<=0) return 0;                       /*c. base: si el num es menor o igual a 0, devuelve 0*/
    else return (SumaRecursiva(n/10) + n%10); /* se divide el numero por 10 y se le suma el resto de la division*/
}

/*calcular el maixmo comun divisor de dos numeros naturales positivos*/
int Mcd(int m, int n){
    if (n<=m && m%n == 0) return n;
    else if (m<n) return Mcd(n, m);
    else return Mcd(n, m%n);
}

/*multiplicar de forma recursiva*/
int producto(int a, int b){
    if (b == 0) return 0;
    else return(a + producto(a, b-1));
}

int main(){
    int numero, multiplo1, multiplo2, n1, n2;
    printf("Ingresa un numero: ");
    scanf("%i", &numero);
    printf("Suma de digitos: %i \n", SumaRecursiva(numero));
    
    printf("Ingrese un numero positivo: ");
    scanf("%i", &multiplo1);
    printf("Ingrese otro numero positivo: ");
    scanf("%i", &multiplo2);
    printf("El maximo comun divisor entre ambos es: %i \n", Mcd(multiplo1, multiplo2));

    printf("Ingrese un numero: ");
    scanf("%i", &n1);
    printf("Ingrese otro numero: ");
    scanf("%i", &n2);
    printf("El producto entre ambos es: %i \n", producto(n1, n2));
    return 0;
}